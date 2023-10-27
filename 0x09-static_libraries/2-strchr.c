#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: input string
 * @c: character to locate
 * Return: pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
int index = 0;

for (; s[index] != '\0'; index++)
{
if (s[index] == c)
{
return (&s[index]);
}
}

return (0);
}
