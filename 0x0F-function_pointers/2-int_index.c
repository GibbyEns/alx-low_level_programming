#include "function_pointers.h"

/**
* int_index - This returns index place if comparison = true or else -1
* @array: The array
* @size: The array size of elements in array
* @cmp: The pointer to func of one of the 3 in main
* Return: success (0) if successful
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int a;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (a = 0; a < size; a++)
{
if (cmp(array[a]))
return (a);
}
return (-1);
}
