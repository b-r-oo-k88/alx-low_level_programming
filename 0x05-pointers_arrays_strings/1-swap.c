#include "main.h"
/**
 * swap - swapping
 * @a: variable
 * @b: variable
 * Return: 0
 */
void swap(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
