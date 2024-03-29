#include "3-calc.h"
#include <stdlib.h>

/**
* get_op_func - It selects the correct function to perform
*               the operations asked by our user.
* @s: The operator is passed as an argument.
*
* Return: A pointer to the function corresponding
*         to the operator is given as a parameter.
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};

int i = 0;

while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;

return (ops[i].f);
}
