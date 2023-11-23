using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShapeManager : MonoBehaviour
{
    [SerializeField]
    private bool isTurn = true;

    public bool isTriangle;
    public Sprite shapeSekil;

    GameObject[] placedEffects;

    // isFull eklenen kısım
    public bool isFull { get; private set; }

    private void Start()
    {
        placedEffects = GameObject.FindGameObjectsWithTag("PlacedEffect");
        isFull = false; // Başlangıçta isFull durumu false olarak ayarlanır.
    }

    public void PlayPlacedEffect()
    {
        int counter = 0;

        foreach (Transform child in gameObject.transform)
        {
            if (placedEffects[counter])
            {
                placedEffects[counter].transform.position = new Vector3(child.position.x, child.position.y, 0f);
                ParticleManager particleManager = placedEffects[counter].GetComponent<ParticleManager>();

                if (particleManager)
                {
                    particleManager.PlayEffect();
                }
            }

            counter++;
        }
    }

    public void LeftMove()
    {
        if (CanMove(Vector3.left))
        {
            transform.Translate(Vector3.left, Space.World);
        }
    }

    public void RightMove()
    {
        if (CanMove(Vector3.right))
        {
            transform.Translate(Vector3.right, Space.World);
        }
    }

    public void DownMove()
    {
        if (CanMove(Vector3.down))
        {
            transform.Translate(Vector3.down, Space.World);
        }
        else
        {
            // Eğer aşağı hareket mümkün değilse, oyun tahtasına yerleştir ve efekti oynat
            BoardManager.Instance.InGrid(this);
            PlayPlacedEffect();
            isFull = true; // Şekil tamamen yerleştirildiği için isFull durumu true yapılır.
            // İlerleyen aşamalarda oyununuzu duraklatmak veya sonlandırmak için gerekli kodu ekleyebilirsiniz.
        }
    }

    public void UpMove()
    {
        if (CanMove(Vector3.up))
        {
            transform.Translate(Vector3.up, Space.World);
        }
    }

    private bool CanMove(Vector3 direction)
    {
        // Hareket etmek istediğimiz yönde bir engel var mı?
        RaycastHit2D hit = Physics2D.Raycast(transform.position, direction, 1f);

        return hit.collider == null;
    }

    public void TurnRight()
    {
        if (isTurn)
        {
            transform.Rotate(0, 0, -90, Space.World);
        }
    }

    public void TurnLeft()
    {
        if (isTurn)
        {
            transform.Rotate(0, 0, 90, Space.World);
        }
    }

    IEnumerator MoveCoroutine()
    {
        while (true)
        {
            DownMove();
            yield return new WaitForSeconds(.25f);
        }
    }

    public void RightRotateBtn(bool isRight)
    {
        if (isRight)
        {
            TurnRight();
        }
        else
        {
            TurnLeft();
        }
    }

    public bool IsOnTopOfSomething()
    {
        Vector2 pos = BoardManager.Instance.VectorToInt(transform.position);
        return BoardManager.Instance.IsSquareFull((int)pos.x, (int)pos.y - 1, this);
    }
    public bool CanTriangleFit(ShapeManager adjacentShape)
    {
        if (adjacentShape != null && adjacentShape.isTriangle)
        {
            Vector2 shapePos = BoardManager.Instance.VectorToInt(transform.position);
            Vector2 adjacentPos = BoardManager.Instance.VectorToInt(adjacentShape.transform.position);

            // İki üçgen bloğun birbirine oturup oturamayacağını kontrol et.
            if (shapePos.y == adjacentPos.y)
            {
                return true;
            }
        }

        return false;
    }


}
