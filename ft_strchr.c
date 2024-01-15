/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:13:57 by acalvet           #+#    #+#             */
/*   Updated: 2024/01/15 18:14:10 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
    if (!str)
        return ('\0');
    while (*str && *str != c)
        str++;
    if (*str == c)
        return ((char *)str);
    return ('\0');
}
