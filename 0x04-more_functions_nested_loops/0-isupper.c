#include "holberton.h"
/**
 * checks if the character is uppercase
 * is the int that will use for the argument of the function
 * Return: 1 if uppercase character 0 if not
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
