#include <stdio.h>
#include <stdlib.h>
/**
 *main - main block
 *prints all single digit numbers of base 10
 *starting from 0, followed by a new line.
 *Return: Always 0 Success
 */
int main(void)
{	char d = '0';

	char c = 'a';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
