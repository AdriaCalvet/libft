/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:49:30 by acalvet           #+#    #+#             */
/*   Updated: 2024/01/15 18:49:33 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
    char *last;

    last = '\0';
    if (!str)
        return ('\0');
    while (*str)
    {
        if (*str == c)
            last = (char *)str;
        str++;
    }
    if (*str == c)
        return ((char *)str);
    return (last);
}
