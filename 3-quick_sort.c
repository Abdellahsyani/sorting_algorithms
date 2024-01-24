#include "sort.h"

void array_swap(int *array, size_t size, size_t left, size_t right);
int lomuto_partition(int *array, size_t size, int left, int right);
void quick_recurse(int *array, size_t size, int start, int end);

/**
 * quick_sort - sort an integer array
 * @array: the array to sort
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array && size)
		quick_recurse(array, size, 0, size - 1);
}

/**
 * quick_recurse - sort an integer array recursively
 * @array: the original array
 * @size: the size of the array
 * @start: the start of the partition
 * @end: the end of the partition
 */
void quick_recurse(int *array, size_t size, int start, int end)
{
	int pivot;

	if (start < end)
	{
		pivot = lomuto_partition(array, size, start, end);
		quick_recurse(array, size, start, pivot - 1);
		quick_recurse(array, size, pivot + 1, end);
	}
}

/**
 * lomuto_partition - find the next pivot to devide and conquer
 * @array: the original array
 * @size: the original size
 * @start: the start of the big partition
 * @end: the end of the big partition
 * Return: where you should devide and conquer
 */
int lomuto_partition(int *array, size_t size, int start, int end)
{
	int pivot = start;

	while (start < end)
	{
		if (array[start] < array[end])
		{
			array_swap(array, size, start, pivot);
			pivot++;
		}
		start++;
	}
	array_swap(array, size, end, pivot);
	return (pivot);
}

/**
 * array_swap - swap two items of an array
 * @array: the original array
 * @size: the original size of the array
 * @right: the first element to swap
 * @left: the second element to swap
 */
void array_swap(int *array, size_t size, size_t left, size_t right)
{
	int box = array[right];

	if (array[left] != box)
	{
		array[right] = array[left];
		array[left] = box;
		print_array(array, size);
	}
}
