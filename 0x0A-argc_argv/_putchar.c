#include "stdio.h"
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print 
 * Return: on success return 1, on error,return  -1, and errno is set appropriately
 */
int _putchar(char c)
{
	return(write (1, &c , 1));
}
