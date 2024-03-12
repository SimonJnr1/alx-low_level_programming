#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		for (b = 0 ; s[a] != accept[b] ; b++)
		{
			if (accept[b] == '\0')
				return (a);
		}
	}
	return (0);
}
