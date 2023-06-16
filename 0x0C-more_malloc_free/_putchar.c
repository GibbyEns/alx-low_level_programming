#include "main.h"
#include <unistd.h>
/**
 * _putchar - This writes the character c to stanard ouput (stdout)
 * @c: The character to be print
 *
 * Return: success 1
 * error, return  -1, errno set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
