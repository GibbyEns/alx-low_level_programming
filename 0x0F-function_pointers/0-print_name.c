#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - This prints name using pointer to function
* @name: The string to added
* @f: The pointer to function
* Return: success, (nothing)
**/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
