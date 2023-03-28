#include "main.h"
/**
 * _puts - swapping
 * @str: pointer varieble
 * Return: 0
 */
void _puts(char *str)
{
	while (str != '\0')
		_putchar(*str++);
	_putchar('\n');
}	
