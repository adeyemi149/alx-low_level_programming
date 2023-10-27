#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The characters to search for.
 *
 * Return: The number of bytes in the initial segment of 's'
 *         which consist only of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, j;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
count++;
break;
}
else if (accept[i + 1] == '\0')
return (count);
}
s++;
}
return (count);
}
