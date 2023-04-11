#include "main.h"

/**
 * get_endianness - checks the endianness of a machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 * Author: Yusuf Mohsen
 */
int get_endianness(void)
{
	int m = 1;
	char *res = (char *)&m;

	if (*res == 1)
		return (1);

	return (0);
}
