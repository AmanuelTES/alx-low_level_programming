#include <stdio.h>

/**
 * main - prints the alphabet in lower case 
 * followed by a new line
 * Return : Alaways 0 (success)
*/
int main(void)
{
    char ch;

    for (ch = 'a' ;ch <= 'z' ;ch++)
    {
        putchar (ch);
    }
    putchar ('\n');
    return (0)
}