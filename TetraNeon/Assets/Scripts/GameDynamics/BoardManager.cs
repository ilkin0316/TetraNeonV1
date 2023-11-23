using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoardManager : MonoBehaviour
{
    [SerializeField]
    private Transform tilePrefab;

    public int height = 22;
    public int width = 10;

    private Transform[,] grid;

    public int completedRaw = 0;

    public ParticleManager[] rawEffects = new ParticleManager[4];

    public static BoardManager Instance { get; private set; }

    private void Awake()
    {
        Instance = this;
        grid = new Transform[width, height];
    }

    private void Start()
    {
        CreateEmptyBoxes();
    }

    bool IsInBoard(int x, int y)
    {
        return (x >= 0 && x < width && y >= 0);
    }

    public bool IsSquareFull(int x, int y, ShapeManager shape)
    {
        if (!IsInBoard(x, y))
        {
            return true;
        }

        Transform block = grid[x, y];

        if (block != null)
        {
            ShapeManager blockShape = block.GetComponent<ShapeManager>();

            if (blockShape == null || (shape != null && blockShape != shape && blockShape.isFull))
            {
                if (shape != null && shape.isTriangle && blockShape != null && blockShape.isTriangle)
                {
                    Vector2 shapePos = VectorToInt(shape.transform.position);
                    Vector2 blockPos = VectorToInt(block.position);

                    if (shapePos.y == blockPos.y)
                    {
                        return false;
                    }
                }
                else
                {
                    return true;
                }
            }
        }

        return false;
    }

    public bool InCurrentPosition(ShapeManager shape)
    {
        foreach (Transform child in shape.transform)
        {
            Vector2 pos = VectorToInt(child.position);

            if (!IsInBoard((int)pos.x, (int)pos.y))
            {
                return false;
            }

            if (pos.y < height)
            {
                if (IsSquareFull((int)pos.x, (int)pos.y, shape))
                {
                    return false;
                }
            }
        }

        return true;
    }

    void CreateEmptyBoxes()
    {
        if (tilePrefab != null)
        {
            for (int y = 0; y < height; y++)
            {
                for (int x = 0; x < width; x++)
                {
                    Transform tile = Instantiate(tilePrefab, new Vector3(x, y, 0), Quaternion.identity);
                    tile.name = "x " + x.ToString() + " ," + "y" + y.ToString();
                    tile.parent = transform;
                }
            }
        }
        else
        {
            Debug.LogError("Tile prefab is null!");
        }
    }

    public void InGrid(ShapeManager shape)
    {
        if (shape == null)
        {
            return;
        }

        foreach (Transform child in shape.transform)
        {
            Vector2 pos = VectorToInt(child.position);

            if (pos.x >= 0 && pos.x < width && pos.y >= 0 && pos.y < height)
            {
                grid[(int)pos.x, (int)pos.y] = child;

                if (shape.isTriangle)
                {
                    // Üçgen bloğun birbirine oturup oturamayacağını kontrol et.
                    if (pos.y > 0)
                    {
                        ShapeManager adjacentShape = grid[(int)pos.x, (int)pos.y - 1]?.GetComponent<ShapeManager>();

                        if (adjacentShape != null && adjacentShape.isTriangle && !shape.CanTriangleFit(adjacentShape))
                        {
                            pos.y += 1;
                        }
                    }
                }
            }
            else
            {
                // Pozisyon dizisinin dışında bir indeks kullanılmaya çalışılıyor, bu durumu kontrol et.
                Debug.LogError("Invalid position index! x: " + pos.x + ", y: " + pos.y);
            }
        }
    }





    bool IsLineFull(int y)
    {
        for (int x = 0; x < width; ++x)
        {
            if (grid[x, y] == null)
            {
                return false;
            }
        }

        return true;
    }

    void CleanLine(int y)
    {
        for (int x = 0; x < width; ++x)
        {
            if (grid[x, y] != null)
            {
                Destroy(grid[x, y].gameObject);
            }

            grid[x, y] = null;
        }
    }

    void DownOneLine(int y)
    {
        for (int x = 0; x < width; ++x)
        {
            if (grid[x, y] != null)
            {
                grid[x, y - 1] = grid[x, y];
                grid[x, y] = null;
                grid[x, y - 1].position += Vector3.down;
            }
        }
    }

    void DownAllLine(int startY)
    {
        for (int i = startY; i < height; ++i)
        {
            DownOneLine(i);
        }
    }

    public IEnumerator CleanAllLine()
    {
        completedRaw = 0;

        for (int y = 0; y < height; ++y)
        {
            if (IsLineFull(y))
            {
                RunRawEffect(completedRaw, y);
                completedRaw++;
            }
        }

        yield return new WaitForSeconds(0.5f);

        for (int y = 0; y < height; y++)
        {
            if (IsLineFull(y))
            {
                if (!HasSpecialTriangle(y))
                {
                    CleanLine(y);
                    DownAllLine(y + 1);
                }

                yield return new WaitForSeconds(0.2f);
                y--;
            }
        }
    }

    public bool IsSpillOut(Vector3 position)
    {
        Vector2 pos = VectorToInt(position);
        return pos.y >= height;
    }

    bool HasSpecialTriangle(int y)
    {
        for (int x = 0; x < width; ++x)
        {
            Transform block = grid[x, y];

            if (block != null && block.GetComponent<ShapeManager>() != null && block.GetComponent<ShapeManager>().isTriangle)
            {
                if (CheckIfTriangleCompletesWithAdjacent(x, y))
                {
                    return true;
                }
            }
        }

        return false;
    }

    public bool CheckIfTriangleCompletesWithAdjacent(int x, int y)
    {
        if (grid[x, y] != null)
        {
            ShapeManager shape = grid[x, y].GetComponent<ShapeManager>();

            if (shape != null && shape.isTriangle && shape.isFull)
            {
                int[] adjacentX = { 0, 1, 1, 1 };
                int[] adjacentY = { 1, -1, 0, 1 };

                for (int i = 0; i < adjacentX.Length; i++)
                {
                    int adjX = x + adjacentX[i];
                    int adjY = y + adjacentY[i];

                    if (IsInBoard(adjX, adjY))
                    {
                        ShapeManager adjacentShape = grid[adjX, adjY]?.GetComponent<ShapeManager>();

                        if (adjacentShape != null && adjacentShape.isTriangle && adjacentShape.isFull)
                        {
                            Debug.Log("Triangle completes with adjacent at (" + adjX + ", " + adjY + ")");
                            return true;
                        }
                    }
                }

                Debug.Log("No adjacent triangle completes with the current triangle at (" + x + ", " + y + ")");
            }
        }

        return false;
    }


    void RunRawEffect(int kacinciSatir, int y)
    {
        if (rawEffects[kacinciSatir])
        {
            rawEffects[kacinciSatir].transform.position = new Vector3(0, y, 0);
            rawEffects[kacinciSatir].PlayEffect();
        }
    }

    public Vector2 VectorToInt(Vector3 vector)
    {
        return new Vector2(Mathf.Round(vector.x), Mathf.Round(vector.y));
    }
}
