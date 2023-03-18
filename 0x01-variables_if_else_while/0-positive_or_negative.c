#include<stdio.h>
/**
 * main - a prgram that displays the number sign
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	scanf("%d", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n >= 0)
		printf("%d is posetive\n", n);
	if (n <= 0)
		printf("%d is negative\n", n);
}
