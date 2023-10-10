#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints a value
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{
	write(1, "_putchar", 8);
	return(0);
}
