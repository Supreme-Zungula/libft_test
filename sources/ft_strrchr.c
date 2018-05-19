/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:51:20 by yzungula          #+#    #+#             */
/*   Updated: 2018/05/19 12:06:54 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	pos;
	char	c_chr;

	i = 0;
	pos = -1;
	c_chr = c + '0';
	if (c_chr == '\0')
	{
		while (s[i] != '\0')
			i++;
		return (s[i]);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c_chr)
			pos = i;
		i++;
	}
	if (pos < 0)
		return (NULL);
	return (s[pos]);
}
