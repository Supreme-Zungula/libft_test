/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:18:13 by yzungula          #+#    #+#             */
/*   Updated: 2018/05/19 11:51:02 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c_char;
	size_t	i;

	c_char = c + '0';
	i = 0;
	if (c_char == '\0')
	{
		while (s[i] != '\0')
			i++;
		return (s[i]);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c_char)
			return (s[i]);
		i++;
	}
	return (NULL);
}
