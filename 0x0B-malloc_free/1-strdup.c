#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string in a new memory space.
 * @str: String to duplicate.
 * Return: Pointer to the duplicated string, NULL if fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];
	duplicate[i] = '\0';

	return (duplicate);
}
