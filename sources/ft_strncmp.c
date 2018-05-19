/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 13:48:47 by yzungula          #+#    #+#             */
/*   Updated: 2018/05/19 14:16:11 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] ==  s2[j] && (i <= n || j <= n) && (s1[i] != '\0' || s2[j] != '\0'))
	{
		i++;
		j++;
	}
	if (s1[i] > s2[j])
		return (1);
	else if (s1[i] < s2[j])
		return (-1);
	return (0);
}
