## C - Recursion

#### [Task 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget](0-puts_recursion.c)

Question: Write a function that prints a string, followed by a new line.

- Prototype that will be used: void _puts_recursion(char *a);

#### [Task 01. Why is it so important to dream? Because, in my dreams we are together](1-print_rev_recursion.c)

Question: Write a function that prints a string in reverse.

- Prototype that will be used: void _print_rev_recursion(char *b);

#### [Task 02. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange](2-strlen_recursion.c)

Write a function that returns the length of a string.

- Prototype that will be used: int _strlen_recursion(char *a);

#### [Task 03. You mustn't be afraid to dream a little bigger, darling](3-factorial.c)

Write a function that returns the factorial of a given number.

- Prototype that will be used: int factorial(int a);
- If 'a' is lower than zero (0) then the function should return -1 stating that an error has orrured 
- The factorial: 0=1

#### [Task 04. Once an idea has taken hold of the brain it's almost impossible to eradicate](4-pow_recursion.c)

Write a function that returns the value of 'a' raised to the power of 'b'.

- Prototype that will be used: int _pow_recursion(int a, int b);
- If 'b' is lower than Zero (0) then the function must return to -1

#### [Task 05. Your subconscious is looking for the dreamer](5-sqrt_recursion.c)

Write a function that returns the natural square root of a number.

- Prototype that will be used: int _sqrt_recursion(int a);
- If 'a' does not have a natural square root, then the function must return to -1

#### [Task 06. Inception. Is it possible?](6-is_prime_number.c)

Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

- Prototype that will be used: int is_prime_number(int a);

#### [Task 07. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything](100-is_palindrome.c)

Write a function that returns 1 if a string is a palindrome and 0 if not.

- Prototype that will be used: int is_palindrome(char *r);
- A palindrome is an empty string

#### [Task 08. Inception. Now, before you bother telling me it's impossible...](101-wildcmp.c)

Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.

- Prototype that will be used: int wildcmp(char *a1, char *a2);
- 'a2' can have a special character '*'.
- The special character '*'can replace by any string including an empty string (palindrome). 
