#include "main.h"
/**
* printf_char:print char
* @v: argument
* Return:1
*/
int printf_char(va_list v)
{
    char s;
    s = va_arg(v, int);
    _putchar(s);
    return (1);
}
