#include "main.h"
#include <stdlib.h>
/**
* create_array -  of size size and assign char c
* @size:The  size of array
* @c: The char to assign
*
* Description:To create array the size of size and assign char c
* Return:To pointer array,if fail, NULL
*
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
