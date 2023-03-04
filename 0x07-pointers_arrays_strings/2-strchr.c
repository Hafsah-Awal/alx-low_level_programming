#include "main.h"

/**
 * _strchr - Entry point
 *
 * @c: occurrence of the character
 *
 * @s: in the string
 *
 * Return:Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
