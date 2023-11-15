#include "main.h"
/**
* print_c - prints a character.
* @args_list: arguments.
* Return: integer.
*/
int print_c(va_list args_list)
{
char s;
s = va_arg(args_list, int);
_putchar(s);
return (1);
}
