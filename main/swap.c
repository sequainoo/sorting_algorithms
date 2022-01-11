#include "sort.h"


/**
 * swap - Swaps two elements of a given array
 * @array: Array in question
 * @pos1: Position of element 1
 * @pos2: Position of element 2
 */
void swap(int *arr, int pos1, int pos2)
{
	int temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}
