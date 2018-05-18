/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 15:01:15 by yzungula          #+#    #+#             */
/*   Updated: 2018/05/18 15:33:50 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

int		main(void)
{
	//Testing ft_strlen
	char	*name = "Yamkela";
	char	*fullname = "Yamkela Zungula";
	
	printf("name ft_strlen = %d\n", ft_strlen(name));
	printf("fullname ft_strlen = %d\n", ft_strlen(fullname));
}
