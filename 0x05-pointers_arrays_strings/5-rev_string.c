#include "main.h"
/**
 * rev_string - reverse string
 * @s: variable
 * Return: 0
 */
void rev_string(char *s)
{
	char r = s[0];
	int j = 0;
	int i;

	while (s[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		j--;
		r = s[i];
		s[i] = s[j];
		s[j] = r;
	}
}
