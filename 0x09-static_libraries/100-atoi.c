#include "main.h"

/**
 * _atoi - Converts string to integer.
 *
 * @s: String parameter.
 *
 * Return: Integer.
 */
int _atoi(char *s)
{
	int value = 1;
	unsigned int sign = 0;
	int i = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			value *= -1;
		}
		i++;
	}

	while (s[i] <= '9' && s[i] >= '0' && s[i] != '\0')
	{
		sign = (sign * 10) + (s[i] - '0');
		i++;
	}

	sign *= value;
	return (sign);
}
