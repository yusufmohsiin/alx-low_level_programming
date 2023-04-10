#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: bit to return.
 * @index: index to get the value at.
 * Author: Yusuf Mohsen
 *
 * Return:  value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))  /*checks for errors*/
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
