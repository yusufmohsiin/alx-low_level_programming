#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return 0 (success)
 *
 */
int main(void) 
{

	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
