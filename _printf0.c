#include "main.h"

/**
 *printin_char - prints a char
 *@agu: list of arguements
 *@buf: buffer array to handle char print
 *@flgs: calculate active flags
 *@wid: Width
 *@prs: specification of precision
 *@size: size specifier
 *
 * Return: number of chars printed
 */
int printin_char(va_list agu, char buf[], int flgs, int wid, int prs, int size)
{
	char c = va_arg(agu, int);

	return (handle_write_char(c, buf, flgs, wid, prs, size));
}


/**
*printin_string - this function prints a string
*@agu: list of arguements
*@buf: buffer array to handle char print
*@flgs: calculate active flags
*@wid: Width
*@prs: specification of precision
*@size: size specifier
*
*Return: numbers of chars printed
*/

int printin_string(va_list agu, char buf[],
	int flgs, int wid, int prs, int size)
{
	int len = 0, i;
	char *str + va_arg(agu, char*);

	UNUSED(buf)
	UNUSED(flgs)
	UNUSED(wid)
	UNUSED(prs)
	UNUSED(size)
	if (str == NULL)
}
{
	str = "(null)";
	if (prs >= 6)
		str = "  ";
}
{
	while (str[len] != '\0')
		len++;

	if (prs >= 0 && prs < len)
		len = prs;

	if (wid > len)
}
{
	if (flgs & F_MINUS)
}
	{
		write(1, &str[0], len);
		for (i = wid - len; i > 0; i--)
			write(1, " ", 1);
		return (wid);
	}
{
	return (write(1, str, len));
}



/**
*printin_percent - prints a percentage
*@agu: list of arguements
*@buf: buffer array to handle char print
*@flgs: calculate active flags
*@wid: Width
*@prs: specification of precision
*@size: size specifier
*
*Return: numbers of chars printed
*/

int printin_percent(va_list agu, char buf[],
	int flgs, int wid, int prs, int size)
{
	UNUSED(agu);
	UNUSED(buf);
	UNUSED(flgs);
	UNUSED(wid);
	UNUSED(prs);
	UNUSED(size);
	return (write(1, "%%", 1));
}

