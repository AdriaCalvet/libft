#include "libft.h"
#include <stdio.h>

int main(void)
{
    char testChar = 'A';

    if (ft_isdigit(testChar))
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
    return 0;
}
