/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:08:07 by nmoulin           #+#    #+#             */
/*   Updated: 2022/12/01 00:07:25 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**cleaner(char ***str, int len)
{
	while (--len >= 0)
		free((*str)[len]);
	free(*str);
	return (0);
}

int	countword(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	*put_in_tab(const char *s, int *i, char c)
{
	static int	j;
	int			index;
	char		*res;

	j = 0;
	index = 0;
	while (s[*i] == c && s[*i])
		(*i)++;
	while (s[*i + j] != c && s[*i + j])
		j++;
	res = malloc(sizeof(char) * j + 1);
	if (!res)
		return (NULL);
	while (index < j)
	{
		res[index++] = s[*i];
		(*i)++;
	}
	res[index] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		lenword;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	lenword = countword(s, c);
	res = malloc(sizeof(char *) * (lenword + 1));
	if (!res)
		return (NULL);
	while (i < lenword)
	{
		res[i] = put_in_tab(s, &j, c);
		if (res[i] == NULL)
			return (cleaner(&res, i));
		i++;
	}
	res[i] = 0;
	return (res);
}
