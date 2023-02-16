/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:29:06 by nmoulin           #+#    #+#             */
/*   Updated: 2022/12/01 00:08:20 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if (count >= (size_t) - 1 || size >= (size_t) - 1)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, count * size);
	return (tmp);
}
