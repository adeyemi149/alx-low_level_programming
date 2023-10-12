#include <stdio.h>
#include "main.h"

/*
 *print_diagonal - print diagonals
 *
 * Return - void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		printf("\n");
	}
	else 
	{
		int i, j;
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == i)
				{
					_putchar("\\");
				}
			       	else if (j < i) 
				{
					_putchar(" ");
				}
			}
			_putchar("\n");
		}
	}
}
