#include <stdio.h>
#include "main.h"
/**
* main - prints out the number of arguments passed in the programme
* @argc: The number of arguments
* @argv: The array of arguments
*
* Return: 0 (when Successful)
*/
int main(int argc, char *argv[])
{
	(void) argv;
	/*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
