/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:56:44 by nmoulin           #+#    #+#             */
/*   Updated: 2022/12/01 00:10:11 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	while (n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
		n--;
	}
	return (NULL);
}
