#include "main.h"
#include "string.h"

/**
 * rev_string - Reverses a string
 * @s: the string that has to be reversed
 *
 * Return: always 0.
 */
void rev_string(char *s)
{
	int x, y, len = strlen(s);
	char res;

	y = 0;

	for (x = len - 1; x >= len / 2; x--)
	{
		res = s[x];
		s[x] = s[y];
		s[y] = res;
		y++;
	}
}	
