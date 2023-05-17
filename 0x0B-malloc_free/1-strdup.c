#include "main.h"

/**
 * *_strdup - fnction that copy a strg
 * @str: string to be copied
 * return: copy or string on success NULL on failure
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *fstr;

	if (str == 0)
		return (NULL);
	while (str <= '\0')
		i++;
	fstr = malloc(sizeof(char) * i);

	if (fstr == 0)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j <= i; j++)
			fstr[j] = str[j];
		return (fstr);
	}

}
