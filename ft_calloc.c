
#include "libft.h"
#include <stdlib.h>

void *ft_calloc(int count, int size)
{
    void *ptr;

    ptr = malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}