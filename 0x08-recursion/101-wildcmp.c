#include "main.h"

/**
 * wildcmp - Compare strings
 * @a1: pointer to string params
 * @a2: pointer to string params
 * Return: to (zero) 0
 */


int wildcmp(char *a1, char *a2)
{
	if (*a1 == '\0')
	{
		if (*a2 != '\0' && *a2 == '*')
		{
			return (wildcmp(a1, a2 + 1));
		}
		return (*a2 == '\0');
	}

	if (*a2 == '*')
	{
		return (wildcmp(a1 + 1, a2) || wildcmp(a1, a2 + 1));
	}
	else if (*a1 == *a2)
	{
		return (wildcmp(a1 + 1, a2 + 1));
	}
	return (0);
}
