#include "main.h"

/**
 * printin_binary - prints an unsigned number
 * @agu: list of arguments
 * @buf: buffer array to handle print
 * @flgs: calculates active flags
 * @wid: Width
 * @prs: precision specification
 * @size: size specifier
 *
 * Return: numbers of chars printed
 */

int printin_binary(va_list agu, char buf[],
	int flgs, int wid, int prs, int size)
{
unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	UNUSED(buf);
	UNUSED(flgs);
	UNUSED(wid);
	UNUSED(prs);
	UNUSED(size);

	n = va_arg(agu, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			count++;
		}
	}
	return (count);
}
