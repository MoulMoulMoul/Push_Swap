/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:04:26 by nmoulin           #+#    #+#             */
/*   Updated: 2022/11/30 22:12:59 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	len = ft_strlen(dest);
	if (len >= size)
		return (size + ft_strlen(src));
	while ((src[i]) && (len < size - 1))
	{
		dest[len++] = src[i++];
	}
	dest[len] = '\0';
	return (len + ft_strlen(&src[i]));
}
