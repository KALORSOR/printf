#include "main.h"

/**
 * printin_int - this function is to print int
 * @agu: list of arguments
 * @buf: buffer array to handle print
 * @flgs: calculates active flags
 * @wid: Width
 * @prs: precision specification
 * @size: size specification
 *
 * Return: number of chars printed
 */

int print_int(va_list agu, char buf[],
	int flgs, int wid, int prs, int size)
{
	int i = BUFF_SIZE - 2;
	int is_negative = 0;
	long int n = va_arg(agu, long int);
	unsigned long int num;

	n = convert_size_number(n, size);

	if (n == 0)
		buf[i--] = '0';

	buf[BUFF_SIZE - 1] = '\0';
	num = (unsigned long int)n;

	if (n < 0)
	{
		num = (unsigned long int)((-1) * n);
		is_negative = 1;
	}

	while (num > 0)
	{
		buf[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	return (write_number(is_negative, i, buf, flgs, wid, prs, size));
}

