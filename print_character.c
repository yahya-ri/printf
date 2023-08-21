#include "main.h"
/**
 * prt_c - prints a character.
 * @args: argument.
 *
 * Return: 1.
 */
int prt_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
