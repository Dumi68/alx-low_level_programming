#include "main.h"
/**
 * _isupper - checks if character(s) is uppercase
 * @c: character to check
 * Return: Always 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
