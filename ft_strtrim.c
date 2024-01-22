
#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int k;
    char *str;

    i = 0;
    j = ft_strlen(s1) - 1;
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    while (j > i && ft_strchr(set, s1[j]))
        j--;
    str = (char *)malloc(sizeof(char) * (j - i + 2));
    if (!str)
        return (NULL);
    k = 0;
    while (i <= j)
        str[k++] = s1[i++];
    str[k] = '\0';
    return (str);
}