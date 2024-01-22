
#include "libft.h"

void *ft_memmove(void *dest, const void *src, int n)
{
    int i;

    i = 0;
    if (dest < src)
    {
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    else
    {
        while (i < n)
        {
            ((unsigned char *)dest)[n - i - 1] = ((unsigned char *)src)[n - i - 1];
            i++;
        }
    }
    return (dest);
}