#include <stdio.h>
#include "function_pointers.h"

/**
* print_name_as_is - prints a name as is
* @name: name of the person
*
* Return: Nothing.
*/
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
* print_name_uppercase - print a name in uppercase
* @name: name of the person
*
* Return: Nothing.
*/
void print_name_uppercase(char *name)
{
unsigned int i;

printf("Hello, my uppercase name is ");
i = 0;
while (name[i])
{
if (name[i] >= 'a' && name[i] <= 'z')
{
putchar(name[i] + 'A' - 'a');
}
else
{
putchar(name[i]);
}
i++;
}
}
