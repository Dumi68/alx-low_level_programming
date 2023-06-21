#include "main.h"
/**
 * _isalpha -checks for lowercase and uppercase
 * @c: the character to check
 * Return: 1 if check is successful, otherwise 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
