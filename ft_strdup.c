
#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    char *str;
    int i;

    i = 0;
    while (s[i])
        i++;
    str = (char *)malloc(sizeof(char) * (i + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}