
#include "libft.h"
#include <stdlib.h>

char **ft_split(char const *s, char c)
{
    char **result;
    int i;
    int j;
    int k;

    result = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
    if (!result)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (!s[i])
            break ;
        result[j] = (char *)malloc(sizeof(char) * (ft_wordlen(s, c, i) + 1));
        if (!result[j])
            return (NULL);
        k = 0;
        while (s[i] && s[i] != c)
            result[j][k++] = s[i++];
        result[j][k] = '\0';
        j++;
    }
    result[j] = NULL;
    return (result);
}