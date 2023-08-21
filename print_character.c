#include "main.h"
/**
 * prt_c - prints a character.
 * @args: argument.
 *
 * Return: 1.
 */
int prt_c(va_list args)
{
	char str;

	str = va_arg(args, int);

	if (str == '\0')
	{
		return (0);
	}
	else
	{
		_putchar(str);
		return (1);
	}
}
