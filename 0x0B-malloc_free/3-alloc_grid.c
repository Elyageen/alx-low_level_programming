#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array initialized to 0
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the newly created 2D array
 *         or NULL if failure or if width or height is 0
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int x, y;

    if (width <= 0 || height <= 0)
        return (NULL);

    grid = malloc(sizeof(int *) * height);

    if (grid == NULL)
        return (NULL);

    for (x = 0; x < height; x++)
    {
        grid[x] = malloc(sizeof(int) * width);

        if (grid[x] == NULL)
        {
            for (; x >= 0; x--)
                free(grid[x]);
            free(grid);
            return (NULL);
        }
    }

    for (x = 0; x < height; x++)
    {
        for (y = 0; y < width; y++)
            grid[x][y] = 0;
    }

    return (grid);
}

