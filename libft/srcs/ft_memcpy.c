/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:57:19 by nmoulin           #+#    #+#             */
/*   Updated: 2022/11/30 21:12:45 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*res;
	const char	*source;

	i = -1;
	if (!dest && !src)
		return (NULL);
	res = dest;
	source = src;
	while (++i < n)
		res[i] = source[i];
	return (res);
}
