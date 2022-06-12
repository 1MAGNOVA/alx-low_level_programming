#include <stdio.h>
/**
 * main - main block
 * Get random number and checks its last digit, compare it with 5
 * Return: Always 0 Success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
	{
		putchar(c);
	}
		c++;
	}
		putchar('\n');
			return (0);
}
