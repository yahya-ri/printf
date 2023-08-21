#include "main.h"

/**
 * prt_i - prints a decimal.
 * @args: argument.
 * Return: the number of digits in the decimal.
 */

int prt_d(va_list args)
{
	int num = va_arg(args, int);
	char buffer[20];
	int i, len = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	
	for (; num > 0; num /= 10)
	{
		buffer[len++] = '0' + (num % 10);
	}
	
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}
	
	return (len);
}
