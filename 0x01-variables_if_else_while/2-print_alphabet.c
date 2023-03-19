#include <stdio.h>

/**
 * main - this is the starting point of program
 * Description: this program prints Alphabet in lower case
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
		putchar('\n');
	return (0);
}
