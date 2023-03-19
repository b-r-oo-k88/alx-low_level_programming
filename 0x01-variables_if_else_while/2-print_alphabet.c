#include <stdio.h>
/**
 * main - prints a up to z
 *
 * Return: 0 success
 */
int main()
{
	char a_z;

	for (a_z = 'a';a_z <= 'z';a_z++)
	{
		putchar(a_z);
	}
		putchar('\n');
	return (0);
}
