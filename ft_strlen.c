/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:54:20 by acalvet           #+#    #+#             */
/*   Updated: 2024/01/15 16:57:52 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i++] != '\0')
		count++;
	return (count);
}
