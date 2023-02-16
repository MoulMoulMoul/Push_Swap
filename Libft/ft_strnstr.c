/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:06:54 by nmoulin           #+#    #+#             */
/*   Updated: 2022/11/30 22:14:31 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	lenn;

	i = 0;
	lenn = (int)len;
	if ((int)len < 0)
		lenn = ft_strlen(big);
	if (!little[0])
		return ((char *)big);
	while (i < lenn && big[i])
	{
		j = 0;
		while (((i + j) < lenn) && (big[i + j] == little[j] && (big[i + j])))
		{
			j++;
			if (!little[j])
				return ((char *)&big[i]);
		}
	i++;
	}
	return (NULL);
}
