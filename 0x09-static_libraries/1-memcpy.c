#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * @n: number of bytes
 * Return: pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a;
int b = n;

for (a = 0; a < b; a++)
{
dest[a] = src[a];
n--;
}

return (dest);
}
