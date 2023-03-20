#include <stdio.h>
/**
 * main - prints z up to a
 *
 * Return: 0 success
 */
int main(void)
{
	char a_z;

	for (a_z = 'z'; a_z >= 'a'; a_z--)
		putchar(a_z);
	putchar('\n');
	return (0);
}
