#include <stdio.h>
#include "libft.h"

int ft_isalpha(int c)
{
    if(c >= 'a' && c<= 'z' )
        return 1;
    return 0;
}

int main(void){
    int a = ft_isalpha('c');
    printf("%d",a);
    return 0;
}