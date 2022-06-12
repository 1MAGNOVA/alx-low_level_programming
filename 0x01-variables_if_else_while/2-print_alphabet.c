#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - prints alphabets in lowercase
 *
 * Return: Always 0Success
 */

int main(void)
{
	char x = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lower_x = tolower(x);

	putchar(lower_x);
		return (0);
}
