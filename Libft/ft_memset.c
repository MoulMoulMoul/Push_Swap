/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:59:13 by nmoulin           #+#    #+#             */
/*   Updated: 2022/11/30 21:58:13 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*res;
	size_t	i;

	i = 0;
	res = s;
	while (i < n)
		res[i++] = (unsigned char)c;
	return (res);
}
