#include "main.h"

/**
 **_strncpy -main entry.
 *void: nothing
 *@dest: char pointer
 *@src: char pointer
 *@n: integer variable
 *Description: function that copies a string.
 * Return:  pointer to the resulting string dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for ( ; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
