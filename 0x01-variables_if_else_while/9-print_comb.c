#include <stdio.h>

/**
 * main - this this is the starting point of program
 * Description: This a program that prints
 * all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
