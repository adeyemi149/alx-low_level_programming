#include "main.h"

/**
 *_isupper - uppercase letters
 *@c: check char c
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	return 0;
}
