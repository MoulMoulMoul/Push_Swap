/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:03:59 by nmoulin           #+#    #+#             */
/*   Updated: 2023/02/17 13:04:12 by nmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
    (void)argc;
    t_list  *list_a;
    t_list  *list_b;

    check_int(argv);
    if (argc <= 2)
        return ;
    list_a = create_list_a(list_a, argv);
    check_dup(list_a)
    list_b = empty_list();
    if (argc == 5)
        check_low(argc; list_a; list_b);
    list_a = free_list(list_a);
    list_b = free_list(list_b);
}


void check_low(int len; t_list *list_a; t_list *list_b)
{
    if (len )
}

void    if_two(char **lst)
{
    int     temp;
    int     one;
    int     two;

    temp = 0;
    one = ft_atoi(lst[1]);
    two = ft_atoi(lst[2]);
    if (one > two)
        ft_printf("sa");
    exit(EXIT_SUCCESS);
}