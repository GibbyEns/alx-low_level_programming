#include <stdio.h>
#include "main.h"
/**
* _putchar - This writes out the character of c to stdout
* @c:The character to printed
*
* Return: when successful 1
* On error, -1 is returned and errno to be set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
