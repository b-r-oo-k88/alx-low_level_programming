#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print 0-9 with putchar
 *
 * Return: 0 success
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}