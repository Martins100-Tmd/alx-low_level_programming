#include "search_algos.h"


int binary_search(int *array, size_t size, int value)
{
	int L = 0, mid, R = size, result;

	while (L < R)
	{
		mid = (L + R) / 2;

		if(array[mid] < value)
			L = mid + 1;
		else
			R = mid;
	}
	result = array[L] ? L : -1;
	return (result);
}
