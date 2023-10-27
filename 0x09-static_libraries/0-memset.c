#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * with the constant byte b.
 * @s: pointer to the memory area to be filled
 * @b: the character to fill the memory area with
 * @n: number of bytes to be filled
 * Return: a pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;
for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
