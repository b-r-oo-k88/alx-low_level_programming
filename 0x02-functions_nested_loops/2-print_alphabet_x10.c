#include "main.h"
/**
 * print_alphabet_x10 - 10 times display
 *
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
	int a_z;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a_z = 'a'; a_z <= 'z'; a_z++)
			_putchar(a_z);
		_putchar('\n');
	}
}
