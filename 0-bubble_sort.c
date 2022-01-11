#include "sort.h"


/**
 * swap - Swaps two elements of a given array
 * @array: Array in question
 * @pos1: Position of element 1
 * @pos2: Position of element 2
 */
void swap(int *array, int pos1, int pos2)
{
	int temp = array[pos1];

	array[pos1] = array[pos2];
	array[pos2] = temp;
}

/**
 * bubble_sort - sorts an array usinng the bubblesot algorithm
 * @array: The array to sort
 * @size: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t lo = 0, hi = size;
	int n_sorted = 1;

	while (n_sorted == 1)
	{
		n_sorted = 0;
		while (lo < hi - 1)
		{
			if (array[lo] > array[lo + 1])
			{
				n_sorted = 1;
				swap(array, lo, lo + 1);
				print_array(array, size);
			}
			lo++;
		}
		lo = 0;
		hi--;
	}

}
