/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:47:12 by acalvet           #+#    #+#             */
/*   Updated: 2024/01/26 13:47:16 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	len;

	i = 0;
	if (s && f)
	{
		len = ft_strlen(s);
		while (i < len)
		{
			f(i, &s[i]);
			i++;
		}
	}
}
