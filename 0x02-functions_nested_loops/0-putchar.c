#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	-put('/n');

	return (0);
