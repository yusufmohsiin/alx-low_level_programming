#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void _res(unsigned long int n);
/**
 * Author: Yusuf Mohsen.
 * Date: 09-04-23
 *
 * print_binary - binary represesbtation of a num.
 * @n: binary num to represent
 *
 * Return: None
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	_res(n);
}

/**
 * _res: checks for
 * @n: number to be checked
 *
 * Return: nothing
 */
void _res(unsigned long int n)
{
	if (n > 1)
		return;

	_res(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
