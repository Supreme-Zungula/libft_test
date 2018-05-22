/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:51:20 by yzungula          #+#    #+#             */
/*   Updated: 2018/05/22 15:12:47 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	pos;
	
	pos = 0;
	while (*s != '\0')
	{
		pos++;
		s++;
	}
	if (c == '\0')
		return ((char *)&s[pos]);
	while (pos--)
	{
		if (s[pos] == c)
			return ((char *)&s[pos]);
	}
	return (NULL);
}
