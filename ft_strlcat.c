
#include "libft.h"

int ft_strlcat(char *dest, const char *src, int size)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] && i < size)
        i++;
    while (src[j] && i + j + 1 < size)
    {
        dest[i + j] = src[j];
        j++;
    }
    if (i < size)
        dest[i + j] = '\0';
    return (i + ft_strlen(src));
}