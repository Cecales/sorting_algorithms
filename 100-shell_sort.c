#include "sort.h"

/**
 * void shell_sort -
 * @array:
 * @size:
 */

void shell_sort(int *arr, size_t size)
{
	int i, j;
	int gap = 1;

	if (!arr || size < 2)
		return;
	while (gap < (int)size / 3)
		gap = gap * 3 + 1;

	while (gap >= 1)
	{
		for (i = gap; i < (int)size; i++)
		{
			for (j = i; j >= gap && arr[j] < arr[j - gap]; j -= gap)
			{
				int tmp = arr[j];

				arr[j] = arr[j - gap];
				arr[j - gap] = tmp;
			}
		}
		print_array(arr, size);

		gap = gap / 3;
	}
}
