#include "main.h"
/**
 * printf_string: print string
 * @v: argument
 * Return :the length of the string
 *
 */

int ptintf_string(va_list v)
{
    char *s;
    int i, len;
    s = va_arg(v, char*);
    if(s == NULL)
    {
        s = "(null)";
        len = _strlen(s);
        for(i=0; i<len; i++){
            _putchar(s[i]);
        }
        return (len);

    }
    else
    {
        len = _strlen(s);
        for(i=0; i<len; i++){
            _putchar(s[i]);
        }
        return (len);

    }   

}
