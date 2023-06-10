#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - To check number - if string has a digit
* @str: the array str
*
* Return: Always 0 (when Successful)
*/
int check_num(char *str)
{
	/*Declare variables*/
	unsigned int count;

	count = 0; while (count < strlen(str))
	/*counting string*/

	{
		if (!isdigit(str[count]))
		/*check if str has a digit*/
		{ return (0);
		}

		count++;
	} return
	(1);
}

/**
* main - Prints out the name of the programme
* @argc: The count arguments
* @argv: The arguments
*
* Return: 0 (when Successful)
*/
int main(int argc, char *argv[])
{
/*Declare variables*/ 
	int count;
	int str_to_int;
	int sum = 0;
    count = 1;
    while (count < argc)
/*Going through the whole array*/
{
    if (check_num(argv[count]))
    {
    str_to_int = atoi(argv[count]);
    /*ATOI --> converting the string to an int*/
	sum += str_to_int;
    }
    /*Condition that if one of the number contains a symbol that are not digits*/
    else
    { printf("Error\n");
	    return (1);
    }
	count++;
}
	printf("%d\n", sum);
	/*print the sum*/
return (0);
}
