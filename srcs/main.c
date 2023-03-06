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
    check_int(argv);
    if (argc <= 2)
        return ;
    if (argc == 3)
        if_two(argv)
    create_struct_a(argc, argv);
      
}

t_list    *create_struct_a(int argc, char **argv)
{
    int         i;
    t_list      *val_a;
    t_list      *temp;

    i = 0;
    while (++i != argc)
    {
        temp = ft_lstnew(ft_atoi(argv[i]));
        ft_lstadd_back(val_a, temp);            
    }
}

void    check_int(char **lst)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (lst[j])
    {
        j++;
        i = 0;
        if (lst[j][i] == '+' || lst[j][i] == '-')
                i++;
        while(lst[j][i])
        {
            if (lst[j][i] < '0' || ls > '9')
            {
                write(2, "ERROR\n", 6);
                exit(EXIT_FAILURE);
            }
            i++;
        }
    }
}

void    check_dup(t_list *lst)
{
    t_list     *temp;

    temp->next = content;
    while(*lst)
    {
        while(*temp)
        {
            if(lst == temp)
            {
                write(2, "ERROR\n", 6);
                exit(EXIT_FAILURE);
            }
            temp = temp->next;
        }
        lst = lst->next;
        temp = temp->lst;
    }
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

void    swap_a(t_list **a)
{
    t_list  *temp;

    if (a)
    {
        if(*a)
        {
            temp = start;
            start = start->next;
            start ->next = temp;
            write (1, "sa\n", 3);
        }
    }
}

void    swap_b(t_list **b)
{
    t_list  *temp;

    if (b)
    {
        if(*b)
        {
            temp = b;
            b = b->next;
            b ->next = temp;
            write (1, "sb\n", 3);
        }
    }
}

void    push_a(t_list **a, t_list **b)
{
    t_list  *temp;

    if(a)
    {
        if(*a)
        {

        }
    }
}

void    rotate_a(t_list **a)
{
    t_list  *temp;

    if(a)
    {
        if(*a)
        {
            temp = *a;
            ft_lstadd_back(t_list **a, t_list *temp);

        }
    }
}