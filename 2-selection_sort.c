#include "sort.h"
/**
 *selection_sort - sort array in ascending order
 *@array: array
 *@size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int ct;
	int temp;
	size_t a;
	size_t b;
	size_t c;

	if (size < 2)
	{
		return;
	}
	for (a = 0; a < size; a++)
	{
		c = a;
		ct = 0;
		for (b = a + 1; b < size; b++)
		{
			if (array[c] > array[b])
			{
				c = b;
				ct++;
			}
		}
		temp = array[a];
		array[a] = array[c];
		array[c] = temp;
		if (ct > 0)
		{
			print_array(array, size);
		}
	}
}
