#include <stdio.h>

/**
 * main - this is starting point of program
 * Description: this program is used to prints
 * all single digit numbers of base 10 starting
 *  from 0, followed by a new line.
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i += 1)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
