#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - prints alphabets in lowercase
 *
 * Return: Always 0Success
 */

int main(void)
{
	int x = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int lower_x = tolower(x);

	putchar(lower_x);
		return (0);
}
