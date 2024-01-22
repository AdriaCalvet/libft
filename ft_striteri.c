
#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    char *str;
    int i;

    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        str[i] = f(s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}