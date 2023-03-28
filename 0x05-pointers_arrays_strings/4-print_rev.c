#include "main.h"
/**
 * print_rev - swapping
 * @s: variable
 * Return: 0
 */
void print_rev(char *s)
{
	int ln = 0;
	int n;

	while (*s != '\0')
	{
		ln++;
		s++;
	}
	s--;
	for (n = ln; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n')
}
