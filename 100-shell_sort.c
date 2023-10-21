#include "sort.h"
#include <stdio.h>
/**
 * _swap - swaped 2 values.
 * @array: the array for swap him values.
 * @i: First index
 * @j: Second index
 * Return: Nothing
 */
void _swap(int *array, int i, int j)
{
	int tmp;

	if (array[i] != array[j])
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
}
