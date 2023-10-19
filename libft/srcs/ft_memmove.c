/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:59:00 by nmoulin           #+#    #+#             */
/*   Updated: 2022/11/30 21:09:48 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ladest;
	char	*lasrc;

	i = -1;
	ladest = (char *)dest;
	lasrc = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (src < dest)
		while (n-- > 0)
			ladest[n] = lasrc[n];
	else
		while (++i < n)
			ladest[i] = lasrc[i];
	return (dest);
}
