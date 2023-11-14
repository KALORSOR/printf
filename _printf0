#include "main.h"

/**
 *printin_char - prints a char
 *@arg: list of arguements
 *@buf: buffer array to handle char print
 *@flgs: calculate active flags
 *@wid: Width
 *@prs: specification of precision
 *@size: size specifier
 *
 * Return: number of chars printed
 */
int printin_char(va_list arg, char buf[], int flgs, int wid, int prs, int size)
{
	char c = va_arg(arg, int);

	return (handle_write_char(c, buf, flgs, wid, prs, size));
}
