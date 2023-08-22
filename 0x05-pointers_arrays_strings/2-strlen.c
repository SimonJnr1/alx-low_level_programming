#include "main.h"

/**
 * _strlen -  returns the length of a string.
 * @s: parameter to be counted
 * Return: length of string
 */

int _strlen(char *s)
{
	int a;
	int count = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		count++;
	return (count);
}
