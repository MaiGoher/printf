#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;
int printf_bin(va_list val);
int printf_dec(va_list args);
int printf_int(va_list args);
int _putchar(char c);
int printf_char(va_list v);
int ptintf_string(va_list v);
int _strlen(char *s);
int _strlenc(const char *s);
int printf_precentage(void);
int _printf(const char * const format, ...);


#endif
