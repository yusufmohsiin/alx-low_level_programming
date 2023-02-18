#include <stdio.h>
/**
 * main - Entry point for program
 *
 * Description: prints num's from 0 to 9
 *
 * Return: always 0 (success)
 */
int main(void)
{

	int i;

	for (i = 0; i < 10; i++)
		printf("%i", i);
	putchar('\n');
	return (0);
}
