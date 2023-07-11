#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: The width of the gride.
* @height: The height of the gride.
* Return: returns a pointer to a 2 dimensional array of integers.
*/
int **alloc_grid(int width, int height)
{
int **matrice;
int i = 0, j = 0, p = 0;
if (width == 0 || height == 0)
return (NULL);
matrice = (int **)malloc(sizeof(int *) * height);
if (matrice == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
matrice[i] = (int *)malloc(width * sizeof(int));
if (matrice[i] == NULL)
{
for (p = 0; p < i; p++)
free(matrice[p]);
free(matrice);
return (NULL);
}
for (j = 0; j < width; j++)
matrice[i][j] = 0;
}
return (matrice);
}
