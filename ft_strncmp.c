
#include "libft.h"
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, int n)
{
    int i;

    i = 0;
    while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    if (i == n)
        return (0);
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(void)
{
    int a = ft_strncmp("a","a",1);
    if(a<0)
        printf("%s","El primer te menys que el segon");
    else if(a>0)
        printf("%s","El primer te mes que el segon");
    else
        printf("%s","Son iguals");

    return(0);
}
