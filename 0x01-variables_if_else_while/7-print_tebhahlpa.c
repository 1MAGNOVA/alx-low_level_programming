nclude <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * prints all single digit numbers of base 10
 * followed by a new line.
 * Return: 0
 */
int main(void)
{	char c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
