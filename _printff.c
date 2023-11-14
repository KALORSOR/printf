#include "main.h"

/**
 *printing_char - prints a char
 *@argue: list of arguements
 *@buffer: buffer array to handle char print
 *@flags: calculate active flags
 *@width: Width
 *@precision: specification of precision
 *@size: size specifier
 *
 * Return: number of chars printed
 */
int printing_char(va_list argue, char buffer[], int flags, int width, int precision, int size)
{
	char c = va_arg(argue, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
