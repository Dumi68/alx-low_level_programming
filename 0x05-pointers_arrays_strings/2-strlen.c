#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int string_l = 0;
while (*s != '\0')
{
string_l++;
s++;
}
return (string_l);
}
