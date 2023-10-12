#include <stdio.h>

/*
 *_isdigit - check if number is 0 through 9
 *
 * Returns - 0 or 1
 */

int _isdigit(int c) 
{
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}
