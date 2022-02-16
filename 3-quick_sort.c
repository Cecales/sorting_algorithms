#include "sort.h"

/**
 * quick_sort - sorts an array with the quick sort method
 * @size: size of the array
 * @array: array to sort
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2 || !array)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - creates a subroutine to sorts an array
 * @arr: array of th subroutine
 * @low: start index of partition
 * @hi: final index of partition
 * @s: size of the array (arr)
 */

void quick_sort_recursive(int *arr, int low, int hi, size_t s)
{
	if (low < hi)
	{
		int p = partition(arr, low, hi, s);

		quick_sort_recursive(arr, low, p - 1, s);
		quick_sort_recursive(arr, p + 1, hi, s);
	}
}

/**
 * partition - operates the partition made to the subroutine to sort
 * @arr: array of the suroutine
 * @low: start index of partition
 * @hi: final index of partition
 * @s: size of the array (arr)
 * Return: value sorted
 */

int partition(int *arr, int low, int hi, size_t s)
{
	int pivot = arr[hi], tmp;
	int i = low, j;

	for (j = low; j < hi; j++)
	{
		if (arr[j] <= pivot)
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			if (i - 1 != j)
				print_array(arr, s);
		}
	}
	tmp = arr[i];
	arr[i] = arr[hi];
	arr[hi] = tmp;
	if (i != hi)
		print_array(arr, s);
	return (i);
}
