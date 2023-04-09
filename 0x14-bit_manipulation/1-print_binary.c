#include <stdlib.h>
#include <stdio.h>
#include "main.h"

void _res(unsigned long int n);
/**
  * print_binary - binary representation of a number
  * @n: binary number to represent
  *
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_res(n);
}

/**
  * _res - checks for
  * @n: number to check for
  *
  * Return: nothing
  */
void _res(unsigned long int n)
{
	if (n < 1)
		return;

	_res(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
