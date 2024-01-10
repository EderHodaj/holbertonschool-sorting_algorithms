#include "sort.h"

/**
 * selection_sort -  sort element by swaping them
 * @array: the array to sort
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i,j,temp,min;

	for (i = 0; i < size-1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array(array,size);
	}
}

