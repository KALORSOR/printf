#include "main.h"
/**
* _putchar - writes character c to standard output
* @c: character to print
* Return: On success 1.
* On error, -1 is returned, and error is set.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}


#include "main.h"
/**
* print_37 - prints the char %.
* Return: 1.
*/
int print_37(void)
{
_putchar(37);
return (1);
}
