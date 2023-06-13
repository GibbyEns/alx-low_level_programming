#include "main.h"
#include <unistd.h>
/**
* _putchar - writes c charater to stdout
* @c:character to print
*
*Return: 1 (Success).
* if not, return -1, errno set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
