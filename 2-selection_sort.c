#include "sort.h"
/**
 * swap_ints - Swaps 2 integers in an array
 * @a: First integer
 * @b: Second integer
 * Return: None (void)
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * selection_sort - selection_sorting algorithm
 *
 * @array: array to sort
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
	size_t min_index, i, j;

	if (size < 2 || array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		if (array[min_index] != array[i])
		{
			swap_ints(&array[min_index], &array[i]);
			print_array(array, size);
		}
	}
}
