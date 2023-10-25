#include "main.h"
/**
  * factorial - function parameter
  *
  * @n: function parameter
  *
  * Return: Function n.
  */
int factorial(int n)
{
	if ( n < 0)
	{
	return -1;
	}
	else if (n == 0)
	{
	return 1;	
	} 
	else
	{
	return (n * (factorial(n - 1)); 
	}
}
