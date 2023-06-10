#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is a palindrome, and 0 if it isn't
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string 
 * @a: string to calculate the length of 
 * Return: length of the string 
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursions(s + 1));
}
/**
 * check_pal - checks the character recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: lengh=th of string
 * Return: 1 if it is a palindrome, 0 if it isn't
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len )
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
