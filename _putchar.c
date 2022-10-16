#include "main.h"

/*
* _putchar - writes the characters c to stdout 
* @c: the charcter to print 
* Return : success 1 , error -1 
*/

int _putchar(char c)
{
    return (write(1,&c,1));
}
