#include "main.h"
#include <stdio.h>

/**
 * _strpbk -bytes
 * @s: pointer to char
 * @accept: pointer to char
 *
 * Return: NULLL
 */

char *_strpbk(char *s, char *accept)

{
	int i;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
}

