#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Generates all single-digit number combinations.
 * Separate numbers with a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0'); /* First use: print the digit */

		if (n < 9)
		{
			putchar(','); /* Second use: print the comma */
			putchar(' '); /* Third use: print the space */
		}
	}

	putchar('\n'); /* Fourth use: print the newline */

	return (0);
}
