#include "main.h"

/**
 * *_strcat: concatenates two strings
 * @src: string to be appended
 * @dest: string to be appended to
 * Return: a pointer which is the result
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dlen = 0;

	while (dest[i++])
		dlen++;
	for (i = 0; src[i]; i++)
		dest[dlen++] = src[i];
	return (dest);
}
