#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: integer array to be reversed
 * @n: size of an array
 */
void reverse_array(int *a, int n)
{
	int i, s, res;

	s = n - 1;

	for (i = 0; i < s / 2; i++)
	{
		res = a[i];
		a[i] = a[s - i];
		a[s - i] = res;
	}
}
