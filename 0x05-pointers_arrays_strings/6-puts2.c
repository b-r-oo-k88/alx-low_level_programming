#include "main.h"
/**
 * puts2 - entry
 * @str: char variable
 * Return: 0
 */
void puts2(char *str)
{
	int ln = 0;
	int i = 0;
	char *a = str;
	int j;

	while (*a != '\0')
	{
		ln++;
		a++;
	}
	i = ln - 1;
	for (j = 0; j < i; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\0');
}
