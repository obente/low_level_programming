#include <stdlib.h>

/**
 * alloc_grid - a grid
 * @width: width
 * @height: height
 * Return: Null on failure
 */

int **alloc_grid(int width, int height)
{
	int freedom, x, y, i, **arr;

	if (width < 1 || height < 1)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (freedom = 0; freedom < i; freedom++)
				free(arr[freedom]);
			free(arr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}
	return (arr);
}
