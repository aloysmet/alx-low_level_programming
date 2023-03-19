#include <stdio.h>

/**
 * main - This is the starting point of program
 * Description: this program that prints
 * the lowercase alphabet in reverse, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	for (c = 122; c >= 97; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
