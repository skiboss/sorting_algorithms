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
 * selection_sort - sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 *
 * @array: array to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, jmin;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			jmin = i;
			
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[jmin])
					jmin = j;
			}

			if (jmin != i)
			{
				swap(&array[jmin], &array[i]);
				print_array(array, size);
			}
		}
	}
}
