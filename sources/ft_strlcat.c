/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 10:54:43 by yzungula          #+#    #+#             */
/*   Updated: 2018/05/22 13:27:50 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	if (destsize <= 0)
		return (ft_strlen(dest));
	while (dest[i] != '\0')
		i++;
	while (j <= (destsize - ft_strlen(dest) - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest));
}
