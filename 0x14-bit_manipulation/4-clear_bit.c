#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to modify
 * @index: index of number to modify
 * Author: Yusuf Mohsen
 *
 * Return: 1 if it worked, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8) /*Checks for index*/
	{
		*n &= (~(1 << index));
		return (1); /*It worked*/
	}

	return (-1); /*error*/
}
