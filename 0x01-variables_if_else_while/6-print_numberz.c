#include <stdio.h>
/**
 * main - Entry point for program
 *
 * Description: use putchar to print num's from 0 to 9
 *
 * Return: always 0 (success)
 */
int main(void)
{

	int i;


	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
