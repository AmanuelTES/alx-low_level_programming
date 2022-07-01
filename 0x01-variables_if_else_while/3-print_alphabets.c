#include <stdlib.h>

/**
 * main - prints the alphabet in lower case and then in upper case
 * followed by new line
 * Return : Always 0 (Success)
*/
int main(void)
{
    int ch ;

    for (ch = 'a'; ch <= 'z'; ch++)
            putchar(ch);
    for (ch = 'A'; ch <= 'Z'; ch++)
            putchar(ch);
    putchar('\n');
    return (0);
}