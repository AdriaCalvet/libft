/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:49:30 by acalvet           #+#    #+#             */
/*   Updated: 2024/01/26 12:50:01 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
