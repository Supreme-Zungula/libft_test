/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 12:07:59 by yzungula          #+#    #+#             */
/*   Updated: 2018/05/21 11:36:54 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (*needle == '\0')
		return (haysack);
	while (*haystack != '\0')
	{
		if (ft_strcmp(haystack, needle) == 0 )
			return (haystack);
		haystack++;
	}
	return (NULL);
}
