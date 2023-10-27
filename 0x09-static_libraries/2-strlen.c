#include "main.h"

/**
 * _strlen - Length of string
 * @s: String
 * Return: Length of string
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
