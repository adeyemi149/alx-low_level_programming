#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to be appended from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int m = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (m < n && src[m] != '\0')
	{
		dest[i] = src[m];
		i++;
		m++;
	}

	dest[i] = '\0';

	return (dest);
}
