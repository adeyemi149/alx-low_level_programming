#include <stdio.h>

int main(void) 
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
		
	int i;
	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] != "q" && alphabet[i] != "e") 
		{
			putchar(alphabet[i]);
		}
	}
	putchar("\n");
	return (0);
}
