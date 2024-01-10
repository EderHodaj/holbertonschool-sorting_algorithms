#include <stdio.h>
#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending order
* @array: array to be sorted
* @size: size of the array
*/

void bubble_sort(int *array, size_t size)
{
    long unsigned int i, j, temp;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                print_array(array, size);
            }
        }
    }
}
