#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: char dest
 * @src: char src
 * @n: length int
 * Return:char
 */
char *_strncat(char *dest, char *src, int n)
{
	int y, dlen;

	for (y = 0; dest[y] != '\0'; y++)
	{
		continue;
	}
	for (dlen = 0; src[dlen] != '\0' && dlen < n; dlen++)
	{
		dest[y + dlen] = src[dlen];
	}
	dest[y + dlen] = '\0';
	return (dest);
}
