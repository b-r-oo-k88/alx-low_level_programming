#include <stdio.h>
/**
 * main - print all hexadecimal numbers
 *
 * Return: 0 success
 */
int main(void)
{
	char h_d;

	for (h_d = '0'; h_d <= '9'; h_d++)
		putchar(h_d);
	for (h_d = 'a'; h_d <= 'f'; h_d++)
		putchar(h_d);
	putchar('\n');
	return (0);
}
