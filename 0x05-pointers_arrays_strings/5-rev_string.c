#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * void no return
 */
void rev_string(char *s)
{
	int lenght;
	int i;
	char tmp = s[0];

	while (s[lenght] != '\0')
		lenght++;
	for (i = 0 ; i < lenght / 2; i++)
	{
		tmp = s[i];
		s[i] = s[lenght - 1 - i];
		s[lenght - 1 - i] = tmp;
	}
}
