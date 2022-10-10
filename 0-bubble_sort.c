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
 * bubble_sort - Sorts array
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t step;
	size_t i;
	int swapped;

	if (size < 2 || array == NULL)
		return;

	for (step = 0; step < size; step++)
	{
		swapped = 0;

		for (i = 0; i < size - step - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(&array[i], &array[i + 1]);
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
