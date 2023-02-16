/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:54:03 by nmoulin           #+#    #+#             */
/*   Updated: 2022/11/30 22:43:56 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	itoa_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	itostr(char **res, int n, int index)
{
	long long int	nb;

	nb = (long long int)n;
	if (nb < 0)
	{
		(*res)[0] = '-';
		nb *= -1;
	}
	if (nb > 9)
		itostr(res, (nb / 10), index - 1);
	(*res)[index] = (nb % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = itoa_len(n);
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	res[len] = 0;
	itostr(&res, n, --len);
	return (res);
}
