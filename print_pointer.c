#include "main.h"
#include <unistd.h>
#include <stdarg.h>


/**
* print_pointer - prints in hexadecimal form.
* @args: arguments.
* Return: counter.
*/
int print_pointer(va_list args)
{
void *p;
char *s = "(nil)";
long int a;
int plus_flag = 0;
int space_flag = 0;
int hash_flag = 0;
/*int uppercase_flag = 0;*/
int y;
int i;

p = va_arg(args, void*);

if (p == NULL)
{
for (i = 0; s[i] != '\0'; i++)
{
write(1, &s[i], 1);
}
return (i);
}
/* Check for flags*/
    if (plus_flag) {
        write(1, "+", 1); 
    } else if (space_flag) {
        write(1, " ", 1);  
    }

    write(1, "0x", 2);

    
    if (hash_flag) {
        write(1, "X", 1);  
        /*uppercase_flag = 1;*/  
    }

write(1, "0x", 2);

a = (unsigned long int)p;
y = print_hex_extra(a);

return (y + 2);
}

