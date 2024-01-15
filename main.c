#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char testChar = 'A';

    /* if (ft_isdigit(testChar))
        printf("%c is a digit.\n", testChar);
    else
        printf("%c is not a digit.\n", testChar);

    if (ft_isalpha(testChar))
        printf("%c is an alphabetic character.\n", testChar);
    else
        printf("%c is not an alphabetic character.\n", testChar);

    if (ft_isalnum(testChar))
        printf("%c is an alphanumeric character.\n", testChar);
    else
        printf("%c is not an alphanumeric character.\n", testChar);

    if (ft_isascii(testChar))
        printf("%c is an ascii character.\n", testChar);
    else
        printf("%c is not an ascii character.\n", testChar);

    if (ft_isprint(testChar))
        printf("%c is a printable character.\n", testChar);
    else
        printf("%c is not a printable character.\n", testChar);

    if (ft_strlen("Hello World!") == 12)
        printf("ft_strlen works!\n");
    else
        printf("ft_strlen does not work!\n");

    if (ft_memset(&testChar, 'B', 1) == &testChar)
        printf("ft_memset works!\n");
    else
        printf("ft_memset does not work!\n");

    if(ft_toupper('a') == 'A')
        printf("ft_toupper works!\n");
    else
        printf("ft_toupper does not work!\n");

    if(ft_tolower('A') == 'a')
        printf("ft_tolower works!\n");
    else
        printf("ft_tolower does not work!\n");
    return 0; */

    if (ft_strchr("Hello World!", 'W') == strchr("Hello World!", 'W'))
        printf("ft_strchr works!\n");
    else
        printf("ft_strchr does not work!\n");

    if (ft_strrchr("Hello World!", 'W') == strrchr("Hello World!", 'W'))
        printf("ft_strrchr works!\n");
    else
        printf("ft_strrchr does not work!\n");

    if (ft_strncmp("Hello World!", "Hello World!", 12) == strncmp("Hello World!", "Hello World!", 12))
        printf("ft_strncmp works!\n");
    else
        printf("ft_strncmp does not work!\n");
}
