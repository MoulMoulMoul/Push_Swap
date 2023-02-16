/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:00:49 by nmoulin           #+#    #+#             */
/*   Updated: 2022/11/30 22:52:40 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		write (fd, "-", 1);
		nb = nb * -1;
	}
	if (0 <= nb && nb < 10)
	{
		ft_putchar_fd(nb + '0', fd);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
