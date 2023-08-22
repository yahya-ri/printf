#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

int _putchar(char);
int _printf(const char *format, ...);

/**
 * struct op -format of type that provioded by printf.
 * @cr: format specifier.
 * @f: pointer that will handle the format specifier.
 */

typedef struct op
{
	char *cr;
	int (*f)(va_list);
} spec;

int prt_c(va_list args);
int prt_s(va_list args);
int prt_p(va_list args __attribute__((unused)));
int prt_i(va_list args);


#endif
