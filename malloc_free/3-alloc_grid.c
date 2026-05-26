#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the grid, or NULL on failure
 *         If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int h, w;

    /* Check for invalid dimensions */
    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocate array of pointers (rows) */
    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    /* Allocate each row and initialize to 0 */
    h = 0;
    while (h < height)
    {
        grid[h] = malloc(width * sizeof(int));
        if (grid[h] == NULL)
        {
            /* Free previously allocated rows on failure */
            while (h--)
                free(grid[h]);
            free(grid);
            return (NULL);
        }

        /* Initialize all elements to 0 */
        w = 0;
        while (w < width)
        {
            grid[h][w] = 0;
            w++;
        }
        h++;
    }

    return (grid);
}
