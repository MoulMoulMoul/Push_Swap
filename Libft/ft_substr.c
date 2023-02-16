/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:29:36 by nmoulin           #+#    #+#             */
/*   Updated: 2022/12/01 00:11:17 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen || !s)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while ((s[start]) && (i < len))
		res[i++] = s[start++];
	res[i] = 0;
	return (res);
}
