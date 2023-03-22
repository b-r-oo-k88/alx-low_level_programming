#include "main.h"
/**
 * _abs - absolute value
 * @c: the nuber to be computed
 * Return: absolute value of a number
 */
int _abs(int c)
{
	if (c < 0)
	{
		int n;
		n = c * -1;
		return (n);
	}
	return (c);
}
