#include "main.h"

/**
 * main - Entry point
 *
 * Description: print a qoute using write function
 *      ssize_t write(int fd.const void buf.size_t count)
 *
 * Return: 1 (not success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	-put('/n');

	return (0);
