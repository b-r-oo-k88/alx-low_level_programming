#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing alphabet with out e and q
 *
 * Return: 0 success
 */
int main(void)
{
        char a_z;

        for (a_z = 'a'; a_z <= 'z'; a_z++)
        {
                if (a_z == 'e')
                        continue;
                else if (a_z == 'q')
                        continue;
                else
                        putchar(a_z);
        }
        putchar('\n');
        return (0);
}
