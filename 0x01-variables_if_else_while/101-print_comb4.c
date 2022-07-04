#include <stdio.h>
/**
* main - prints the number from 00 to 99
* Return: Always 0 (Success)
*/
int main(void)
{
int n, m;
for (n = 48; n < 58; n++)
{
for (m = 48; m < 57; m++)
{
putchar(n);
putchar(m);
if (n != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n')
return (0);
}
