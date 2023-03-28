#include "main.h"
/**
 * strlen - swapping
 * @s: variable
 * Return: 0
 */
void strlen(char *s)
{
	in = 0;

	while (*s != '0')
	{
		in++;
		s++;
	}

	return (in);
}
