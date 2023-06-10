#include "main.h"
/**
 * main - Prints _putchar with a new line
 *Return:0(success)
 */
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
	_putchar(*c);
	c++;
	}
	_putchar("\n")
	return (0);
}
