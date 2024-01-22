
#include "libft.h"
#include <stdlib.h>

char *ft_itoa(int n)
{
    char *str;
    int i;
    int sign;

    sign = 1;
    if (n < 0)
        sign = -1;
    str = (char *)malloc(sizeof(char) * (ft_nbrlen(n) + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (n != 0)
    {
        str[i++] = '0' + sign * (n % 10);
        n /= 10;
    }
    if (sign == -1)
        str[i++] = '-';
    str[i] = '\0';
    ft_strrev(str);
    return (str);
}