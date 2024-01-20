#include "sort.h"

/**
 * swap_ing - swap element inside the array
 * @a: the first element 
 * @b: the second element
 *
 */
void swap_ing(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * bubble_sort - The function to arrange number
 * @array: the array to be aranging it
 * @size: The size of array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_ing(&array[j], &array[j + 1]);
			}
		}
		print_array(array, size);
	}
}
