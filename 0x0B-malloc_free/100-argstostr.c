#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all command-line arguments
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: concatenated string of arguments
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++; /* for space after each word */
	}

	len++; /* for the null terminator */

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];

		str[k++] = ' '; /* add space after each word */
	}
	if (str[k] == '\0')		
	{
		str[k++] = '\n';	
	}

	str[k] = '\0'; /* add null terminator */

	return (str);
}

