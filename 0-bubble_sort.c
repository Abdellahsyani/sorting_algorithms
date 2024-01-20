#include "sort.h"

/**
 * bubble_sort - The function to arrange number
 * @array: the array to be aranging it
 * @size: The size of array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 1;
	int swap;

	while (array && i < size)
	{
		j = 1;
		while (j < size)
		{
			if (array[j] < array[j - 1])
			{
				swap = array[j];
				array[j] = array[j - 1];
				array[j - 1] = swap;
			
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
