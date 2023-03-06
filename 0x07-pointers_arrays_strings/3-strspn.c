#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string.
 * @accept: number of bytes.
 * Return:  number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; x < strlen(s); x++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
				return (x);
		}
	}
	return (x);
}
