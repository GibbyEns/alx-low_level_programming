#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - Return the sum of two number.
* @a: The first numbers.
* @b: The second numbers.
*
* Return: The sum of a and b.
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - Returns the differences of two number.
* @a: The first numbers.
* @b: The second numbers.
*
* Return: The difference of a and b.
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - Returns the product of two number.
* @a: The first numbers.
* @b: The second numbers.
*
* Return: The product of a and b.
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - Returns the division of two number.
* @a: The first numbers.
* @b: The second numbers.
*
* Return: The quotient of a and b.
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod - Returns the remainder of the divisions of two numbers.
* @a: The first numbers.
* @b: The second numbers.
*
* Return: The remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
return (a % b);
}
