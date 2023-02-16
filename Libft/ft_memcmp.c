/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:57:07 by nmoulin           #+#    #+#             */
/*   Updated: 2022/12/01 00:10:41 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (n == 0)
		return (0);
	while (n && *(unsigned char *)s1 == *(unsigned char *)s2)
	{
		s1++;
		s2++;
		n--;
		if (n == 0)
			return (0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
