/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:38:20 by nmoulin           #+#    #+#             */
/*   Updated: 2022/11/30 22:15:40 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i]) && ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' ')))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
