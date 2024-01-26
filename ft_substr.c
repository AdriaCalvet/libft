/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:51:24 by acalvet           #+#    #+#             */
/*   Updated: 2024/01/26 12:53:00 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_len(char const *s, unsigned int start, size_t len)
{
	size_t	o_len;

	o_len = 0;
	while (s[o_len] != '\0')
		o_len++;
	if (start >= o_len)
	{
		start = o_len;
		len = 0;
	}
	else if (len > o_len - start)
		len = o_len - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const char	*src;
	char		*dst;
	char		*substring;

	if (s == NULL)
		return (NULL);
	len = ft_len(s, start, len);
	substring = (char *)malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	src = s + start;
	dst = substring;
	while (len > 0)
	{
		*dst++ = *src++;
		len--;
	}
	*dst = '\0';
	return (substring);
}
