#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * void no return
 */
void rev_string(char *s)
{
	int lenght = 0;
	int i;
	char tmp = s[0];

	while (s[lenght] != '\0')
		lenght++;
	for (i = 0 ; i < lenght; i++)
	{
		lenght--;
		tmp = s[i];
		s[i] = s[lenght];
		s[lenght] = tmp;
	}
}
