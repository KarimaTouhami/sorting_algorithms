#include "sort.h"
/**
 * bubble_sort - sorting with bubble sort type
 *
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int swap_flag = 1;
	int tmp;
	size_t i;

	if (!array || !size)
		return;
	while (swap_flag)
	{
		swap_flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swap_flag = 1;
				print_array(array, size);
			}
		}
	}
}
