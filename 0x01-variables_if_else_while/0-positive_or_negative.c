#include <stdlib.h>
#include <time.h>
/*
 * main - Determine if a output is positive, negative or zero
 * 
 * Return Always 0 (Success)
 * */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
        {
		printf("%d\n is zero\n",n)
        } else if (n > 0)
        {
		printf("%d\n is positive\n",n)
        } else
        {
		printf("%d\n is negative\n",n)
        }
	return (0);
}
