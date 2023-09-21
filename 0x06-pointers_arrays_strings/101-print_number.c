#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	/* if n is divisible by 10 */
	if (n / 10)
	{
		/* call function again and evaluate */
		print_number(n / 10);
		/* take second digit and store in n */
		n %= 10;
		/* if second digit negative */
		if (n < 0)
			/* make it positive */
			n *= -1;
	}
	/* if n is NOT divisible by 10 */
	else
		/* and if n is negative */
		if (n < 0)
		{
			/* print a minus sign */
			putchar('-');
			/* and make n positive */
			n *= -1;
		}
	/* print out n */
	putchar(n + '0');
}
