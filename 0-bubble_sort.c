#include "sort.h"

/**
 * swap - This switches the positions of elements passed
 *
 * @a: pointer to the first element passed
 * @b: pointer to the second element passed
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 *              using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			flag = 0;
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
					flag = 1;
				}
			}
			if (flag == 0)
				break;
		}
	}
}
