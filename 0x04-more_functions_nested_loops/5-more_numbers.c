#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14 for 10 times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, k;

	i = 0;
	while (i < 10)
	{
		k = 0;
		while (k <= 14)
		{
			if (k >= 10)
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			k++;
		}
		_putchar('\n');
		i++;
	}
}
	
