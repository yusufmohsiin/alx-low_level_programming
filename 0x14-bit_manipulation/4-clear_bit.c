#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if successed, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/*Checks if the given index is valid*/
	if (index >= sizeof(unsigned long int) * 8)
	/*index out of range? error*/
	return (-1);

	/*sets the value of the bit at the given index to 0*/
	*n &= ~(1UL << index);

	return (1);
}
