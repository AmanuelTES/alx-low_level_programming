#include <stdlib.h>

/**
 * main - print the alphabet in lower case
 * follwed by new line, except q'' and 'c'
 * Return : Always 0 (Success)
*/
int main(void)
{
    char ch = 'a'
    while (ch <= 'z')
    {
        if (ch != 'e' && ch != 'q')
        {
            putchar(ch);
        }
        ch++;
    }
    putchar('\n');
    return (0);
}