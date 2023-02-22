#include "main.h"
/**
 * _islower: checks if the letter is in lowercase 
 * @c: The letter should be checked
 *
 * Return: (1) else (0)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}

	return (0);
}
