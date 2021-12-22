#include "sort.h"
/**
 *qs - quicksort
 *@array: array
 *@size: size of array
 *@h: head
 *@t: tail
 */
void qs(int *array, size_t size, int h, int t)
{
	int pi = t, a, b = h;
	int pn = array[t], temp;

	if (h >= t)
	{
		return;
	}
	for (a = h; a < t; a++)
	{
		if (pn >= array[a])
		{
			if (a != b)
			{
				temp = array[a];
				array[a] = array[b];
				array[b] = temp;
				print_array(array, size);
			}
			b++;
		}
	}
	if (a != b)
	{
		temp = array[a];
		array[a] = array[b];
		array[b] = temp;
		print_array(array, size);
	}
	pi = b;
	qs(array, h, pi - 1, size);
	qs(array, pi + 1, t, size);
}
/**
* quick_sort - sort array of int in ascending order
* @array: array
* @size: size of array
*/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}
	qs(array, 0, size - 1, size);
}
