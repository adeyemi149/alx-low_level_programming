#include <stdio.h>
#include "main.h"

/**
 *swap_int - function swaps the values of two integers
 *@a - input first number
 *@b - input second number 
 *
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
