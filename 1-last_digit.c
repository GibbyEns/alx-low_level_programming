/**
* main - prints the last digit of a random;y generated number 
* and whether it is greater than 5, less than 6, or 0.
*
* Return: Always 0.
*/
int main(void)
(
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digitof %d is %d and is greater than 5\n", 
				n , n % 10);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n",
				n, n % 10);
	}
	/* your code goes there */
	return (0);
}
