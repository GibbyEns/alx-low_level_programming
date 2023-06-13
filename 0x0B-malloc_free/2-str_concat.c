#include "main.h"
#include <stdlib.h>
/**
* str_concat -To get ends of input, add together for the size
* @s1:The input one to concat
* @s2: The input two to concat
*
* Return:if success, concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
	conct[i] = s1[i];
	while (s2[ci] != '\0')
	{
	conct[i] = s2[ci];
	i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
	}
}
