#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf0 -  prints array of format specifiers
 * @
 *
 * Return: void
 */

int _printf0(const char *format, ...) {
    
	int chara = 0;
	va_list args_list;
	if (format == NULL)
		return -1;

    va_start(args_list, format);

    

    while (*format) {
        if (*format != '%') {
		write(1,format,1);
            chara++;
}
	else
{	 format++;
	if (*format == '\0')
		break;
	if (*format == '%'){
	write(1,format,1);
	chara++;
	}
            else if (*format == 'c') 
	    {
                char c = va_arg(args_list, int);
		write(1,&c,1);
		chara++;

            } else if (*format == 's') 
	    {
		char *str = va_arg(args_list, char*);
		int str_len = 0;

		while(str[str_len] != '\0')
			str_len++;
	write(1, str, str_len);
	chara += str_len;
               
            } 
     
            } 

        format++;
    }

    va_end(args_list);
    return chara;
}

	int main()
{
	
	_printf0("Character:[%c]\n", 'H');
	_printf0("String:[%s]\n", "I am a string !");
	_printf0("Percent:[%%]\n");
	
	return 0;	
	} 
