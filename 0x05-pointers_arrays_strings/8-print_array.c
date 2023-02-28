#include "main.h"
#include <stdio.h>


/**
 * print_array - Prints (n) elements of an arry of integers.
 *@a: array has to be printed
 *@n: number of elements in the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}

