#include "main.h"
/**
 * print_alphabet - print alphabet
 *
 * Return: 0 successs
 */
void print_alphabet(void)
{
	int a_z;

	for (a_z = 'a'; a_z <= 'z'; a_z++)
		_putchar(a_z);
	_putchar('\n');
}
