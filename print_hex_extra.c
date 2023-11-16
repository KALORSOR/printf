#include "main.h"
/**
* print_hex_extra - prints an hexgecimal number
* @num: arguments.
* Return: counter.
*/
int print_hex_extra(unsigned long int num)
{
long int i;
long int *array;
long int counter = 0;
unsigned long int temp = num;
while (num / 16 != 0)
{
num /= 16;
counter++;
}
counter++;
array = malloc(counter *sizeof(long int));
for (i = 0; i < counter; i++)
{
array[i] = temp % 16;
temp = temp / 16;
}
for (i = counter - 1; i >= 0; i--)
{
if (array[i] > 9)
array[i] = array[i] + 39;
_putchar(array[i] + '0');
}
free(array);
return (counter);
}




#include "main.h"
/**
* print_i - prints integer
* @args: argument to print
* Return: integer
*/
int print_i(va_list args)
{
int n = va_arg(args, int);
int num, last = n % 10, digit, exp = 1;
int i = 1;
n = n / 10;
num = n;
if (last < 0)
{
_putchar('-');
num = -num;
n = -n;
last = -last;
i++;
}
if (num > 0)
{
while (num / 10 != 0)
{
exp = exp * 10;
num = num / 10;
}
num = n;
while (exp > 0)
{
digit = num / exp;
_putchar(digit + '0');
num = num - (digit *exp);
exp = exp / 10;
i++;
}
}
_putchar(last + '0');
return (i);
}


/**
* print_d - prints decimal
* @args: argument to print
* Return: integer
*/
int print_d(va_list args)
{
int n = va_arg(args, int);
int num, last = n % 10, digit;
int i = 1;
int exp = 1;
n = n / 10;
num = n;
if (last < 0)
{
_putchar('-');
num = -num;
n = -n;
last = -last;
i++;
}
if (num > 0)
{
while (num / 10 != 0)
{
exp = exp * 10;
num = num / 10;
}
num = n;
while (exp > 0)
{
digit = num / exp;
_putchar(digit + '0');
num = num - (digit *exp);
exp = exp / 10;
i++;
}
}
_putchar(last + '0');
return (i);
}
