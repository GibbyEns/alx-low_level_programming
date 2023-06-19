#include <stdlib.h>
#include "dog.h"

/**
 * _strlen -It returns the length of a string
 * @s: The string to evaluate
 *
 * Return: Success, return the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - To copy the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest:The pointer to the buffer in which we copy the string
 * @src: The string to be copied
 *
 * Return: Success, the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog -This creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog.
 *
 * Return:Success,The scooter pointer to the new dog, if not, NULL 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
