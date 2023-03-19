#include <stdio.h>

/**
 * main - starting point of program
 * Description: This program prints
 * all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i = i + 1)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
