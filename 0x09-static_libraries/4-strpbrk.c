#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string to be searched
 * @accept: set of bytes to search for
 *
 * Return: pointer to the first occurrence of a byte in `accept`
 *         within the string `s`, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
	return (s);
	}
	s++;
	}

	return ('\0');
}
