#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int printf_char(va_list v)
{
    char s;
    s = va_arg(v, int);
    _putchar(s);
    return (1);
}
