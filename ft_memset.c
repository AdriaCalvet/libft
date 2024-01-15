/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:14:50 by acalvet           #+#    #+#             */
/*   Updated: 2024/01/15 17:14:52 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memset(void* b, int c, size_t len)
{
    unsigned char*	str;
    size_t			i;

    str = (unsigned char*)b;
    i = 0;
    while (i < len)
        str[i++] = (unsigned char)c;
    return (b);
}
