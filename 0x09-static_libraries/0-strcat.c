#include "main.h"

/**
 *  _strcat - function that concatenates two strings
 *  @dest: entered value
 *  @src: entered value
 *
 *  Return: void
 */
char *_strcat(char *dest, char *src)
{
int k;
int m;

k = 0;

while (dest[k] != '\0')
{
k++;
}
m = 0;
while (src[m] != '\0')
{
dest[k] = src[m];
k++;
m++;
}
dest[k] = '\0';
return (dest);
}
