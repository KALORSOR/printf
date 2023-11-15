#include "main.h"
/**
* print_s - print a string.
* @args_list: arguments.
* Return: string lenght.
*/
int print_s(va_list args_list)
{
char *s;
int i, len;
s = va_arg(args_list, char *);
if (s == NULL)
{
s = "(null)";
len = _strlen(s);
for (i = 0; i < len; i++)
_putchar(s[i]);
return (len);
}
else
{
len = _strlen(s);
for (i = 0; i < len; i++)
_putchar(s[i]);
return (len);
}
}
