#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	printf("sizeof a char: %lu byte\n", sizeof(char));
	printf("sizeof an int: %lu byte\n", sizeof(int));
	printf("sizeof a long int: %lu byte\n", sizeof(long int));
	printf("sizeof a long long int: %lu byte\n", sizeof(long long int));
	printf("sizeof a float : %lu byte\n", sizeof(float));
	return (0);
}
