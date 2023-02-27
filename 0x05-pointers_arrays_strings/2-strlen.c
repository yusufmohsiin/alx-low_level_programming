#include "main.h"
/**
 * _strlen - returns the length of string.
 *
 * @s: the required string to calculate its length.
 * Return: length of string
 */


int _strlen(char *s)
{
	int len = 0;

	int i;

	
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
