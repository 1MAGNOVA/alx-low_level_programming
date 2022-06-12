#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - prints alphabets in lowercase
 *
 * Return: Always 0Success
 */

int main(void)
{	char Ch = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if (isalpha(Ch))
	{	Ch = tolower(Ch)
		putchar(Ch);
	}
		return (0);
}
