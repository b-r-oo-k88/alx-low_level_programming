#include "main.h"
/**
 * _isalpha - check the spell
 * @c: the character to be checkes
 * Return: 1 or 0
 */
int _islower(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 97))
                return (1);
        return (0);
}

