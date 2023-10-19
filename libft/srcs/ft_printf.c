/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:53:28 by nmoulin           #+#    #+#             */
/*   Updated: 2023/03/03 03:15:16 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptf_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_showarg(char c, va_list *args)
{
	int	ret;

	ret = 0;
	if (c == 'i' || c == 'd')
		ret = ft_ptf_putnbr((int)va_arg(*args, int), &ret);
	else if (c == 's')
		ret = ft_ptf_putstr((char *)va_arg(*args, char *));
	else if (c == 'c')
		ret = ft_ptf_putchar((int)va_arg(*args, int));
	else if (c == 'u')
		ret = ft_ptf_uiputnbr((U_INT)va_arg(*args, U_INT), &ret);
	else if (c == '%')
		ret = ft_ptf_putchar('%');
	else if (c == 'x' || c == 'X')
		ret = ft_ptf_puthex((U_INT)va_arg(*args, long U_INT), c, &ret);
	else if (c == 'p')
		ret = ft_ptf_pointer((long U_INT)va_arg(*args, long U_INT), &ret);
	else
		ret = ft_ptf_putchar(c);
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		total;
	char	*s;
	va_list	args;

	s = (char *)format;
	total = 0;
	i = 0;
	va_start(args, format);
	while (s[i])
	{
		if (s[i] != '%')
		{
			total += ft_ptf_putchar(s[i++]);
			continue ;
		}
		if (s[++i])
			total += ft_showarg(s[i], &args);
		i++;
	}
	va_end(args);
	return (total);
}

// #include <stdio.h>

// int main ()
// {
// 	int a, b;
// 	void *p;

// 	a =	   printf("%c%s%d%i%u%x%X %c%s%d%i%u%x%X %c%s%d%i%u%x%X %c%p\n",
// 	 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42,
// 	  'C', "0", 0, 0 ,0 ,0, 42, 0, &p);
// 	b = ft_printf("%c%s%d%i%u%x%X %c%s%d%i%u%x%X %c%s%d%i%u%x%X %c%p\n",
// 	 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42,
// 	  'C', "0", 0, 0 ,0 ,0, 42, 0, &p);

// 	printf("%i|%i", a, b);
// }
