#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str = NULL or insufficient memory
 */
char *_strdup(char *str)
{
    char *duplicate;
    unsigned int i, len;

    if (str == NULL)
        return (NULL);

    /* Calculate string length */
    len = 0;
    while (str[len] != '\0')
        len++;

    /* Allocate memory (len + 1 for null terminator) */
    duplicate = malloc((len + 1) * sizeof(char));
    if (duplicate == NULL)
        return (NULL);

    /* Copy string */
    i = 0;
    while (i <= len)
    {
        duplicate[i] = str[i];
        i++;
    }

    return (duplicate);
}
