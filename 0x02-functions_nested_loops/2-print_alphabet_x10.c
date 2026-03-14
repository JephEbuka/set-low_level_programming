#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;
	char buf[27] = "abcdefghijklmnopqrstuvwxyz\n";

	while (i < 10)
	{
		c = 0;
		while (c < 27)
		{
			_putchar(buf[(int)c]);
			c++;
		}
		i++;
	}
}
