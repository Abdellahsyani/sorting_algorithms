#include "sort.h"

/**
 * bubble_sort - The function to arrange number
 * @array: the array to be aranging it
 * @size: The size of array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swap;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j+1])
			{
				swap = array[j];
				array[j] = array[j+1];
				array[j+1] = swap;
			}
		}
		print_array(array, size);
	}
}
