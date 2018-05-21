/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 14:13:25 by yzungula          #+#    #+#             */
/*   Updated: 2018/05/21 09:19:50 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** *

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;
	
	len = 0;
	while(*str != '\0')
	{
		str++;
		len++;
	}
	return(len);
}
