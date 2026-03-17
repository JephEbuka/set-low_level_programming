#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i = 0;
	int j;
	int new_word = 1;

	while (s[i] != '\0')
	{
		if (new_word && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}

		new_word = 0;
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j])
			{
				new_word = 1;
				break;
			}
		}
		i++;
	}

	return (s);
}
