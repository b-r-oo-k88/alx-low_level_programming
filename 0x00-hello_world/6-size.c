#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	printf("sizeof a char: %d byte\n", (unsigned long)sizeof(char));
	printf("sizeof an int: %d byte\n", (unsigned long)sizeof(int));
	printf("sizeof a long int: %d byte\n", (unsigned long)sizeof(long int));
	printf("sizeof a long long int: %d byte\n", (unsigned long)sizeof(long long int));
	printf("sizeof a float : %d byte\n", (unsigned long)sizeof(float));
	return (0);
}
