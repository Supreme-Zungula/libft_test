/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:43:34 by yzungula          #+#    #+#             */
/*   Updated: 2018/05/21 13:32:06 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcasestr(const char *haystack, const char *needle)
{
	char	*hay;
	char	*nd;

	if (*needle == '\0')
		return (haystack);
	while ((*haystack)++ != '\0')
	{
		*hay = ft_tolower(*haystack);
		hay++;
	}
	*hay = '\0';
   while ((*needle)++ != '\0')
   {
	   *nd = ft_tolower(*needle);
	   nd++;
   }
   *nd = '\0';
	while (*hay != '\0')
	{
		if (ft_strcmp(hay, nd) == 0)
			return (haystack);
		hay++;
		haystack++;
	}
	return (NULL);
}
