#include "sort.h"

/**
 * seletion_sort - the function to sort array.
 * @array: the array to be sorted.
 * @size: the size of array.
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j; 
	int k, temp;

	for (i = 0; i < size - 1; i++)
	{
		k = i;
		for (j = 1 + i; j < size; j++)
		{
			if (array[j] < array[k])
			{
				k = j;
			}
		}
		temp = array[i];
		array[i] = array[k];
		array[k] = temp;
		print_array(array, size);
	}
}
