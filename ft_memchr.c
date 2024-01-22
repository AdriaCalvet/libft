
#include "libft.h"

void *ft_memchr(const void *s, int c, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return ((void *)s + i);
        i++;
    }
    return (NULL);
}