#include "sort.h"
/**
 * swap_int - function that swap integer
 * @a: First number
 * @b: second number
 * Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort -  function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: Array to be sorted
 * @size: size of array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;
		if ((array + i) != min)
		{
			swap_int(array + i, min);
			print_array(array, size);
		}
	}
}
