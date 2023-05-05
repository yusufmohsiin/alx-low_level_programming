#include <stdio.h>
#include "main.h"

/*
 * set_bit - Sets the value of a bit.
 *
 * @n: pointer to the number to modify.
 * @index: index of the bit to set.
 *
 * Return: 1 if successed, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*Checks if the given index is valid*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /*index out of range? return -1*/

	/*Sets the value of the bit at the given index to 1*/
	*n |= (1UL << index);

	return (1);
}
