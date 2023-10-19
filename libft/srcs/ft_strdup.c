/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:03:23 by nmoulin           #+#    #+#             */
/*   Updated: 2022/11/30 22:18:29 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*res;
	int		i;

	i = -1;
	res = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!res)
		return (0);
	while (s[++i])
		res[i] = s[i];
	res[i] = '\0';
	return (res);
}
