#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - printing lower case and upper case
 *
 * Return: 0 success
 */
int main(void)
{
	char a_z;

	for (a_z = 'a'; a_z <= 'z'; a_z++)
		putchar(a_z);
	for (a_z = 'A'; a_z <= 'Z'; a_z++)
		putchar(a_z);
	putchar('\n');
	return (0);
}
