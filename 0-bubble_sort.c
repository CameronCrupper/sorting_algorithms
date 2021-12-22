#include "sort.h"
/**
 *bubble_sort - sort array of int in ascending order
 *@array: array
 *@size: size of array
 *
 *
 */
void bubble_sort(int *array, size_t size)
{
	int t;
	size_t a;
	size_t b;

	if (size < 2 || array == NULL)
	{
		return;
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - a - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				t = array[b];
				array[b] = array[b + 1];
				array[b + 1] = t;
				print_array(array, size);
			}
		}
	}
}
