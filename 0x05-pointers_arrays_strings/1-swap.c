#include "main.h"
/**
 * swap_int - swap two integers
 * @a: first integer
 * @b: second integer
 * Return: Nothing
 */


void swap_int(int *a, int *b)
{
	int res = *a;
	*a = *b;
	*b = res;
}
