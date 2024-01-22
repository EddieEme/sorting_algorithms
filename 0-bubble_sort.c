#include "sort.h"
/**
 * bubble_sort - sorts an array of int in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, j;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size -1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        print_array(array, size);
    }

}