#include "sort.h"

/**
 * swap - switch the positions of elements passed
 *
 * @a: pointer to the first element
 * @b: pointer to the second element
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * shell_sort - sort an array of integers in ascending order
 *              using shell sort algorithm
 *
 * @array: array of integers to be sorted
 * @size: size of the array
 *
 */

void shell_sort(int *array, size_t size)
{
	size_t s, j, gap;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < size / 3;)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (s = gap; s < size; s++)
		{
			j = s;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
