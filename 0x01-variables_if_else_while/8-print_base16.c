#include <stdio.h>

/**
 * main - this the starting point of the program
 *
 * Description: this program that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i += 1)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
