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
    t_pile  *pile;
    t_list  *checker;

    check_int(argv);
    if (argc <= 2)
        return ;
    pile = create_pile(argv);
    check_dup(pile);
    checker = sorted_list(create_list(checker, argv));
    place_pos(pile, checker);
    if (argc <= 6)
        sort_small_stack(argc, pile);
    else
        sort_big_stack(pile);
    free_pile(pile);
}

void sort_small_stack(int len, t_pile *pile)
{
    if (len == 2)
        exit(EXIT_SUCCESS);
    if (len == 3)
        sort_two(pile);
    if (len == 4)
        sort_three(pile);
    if (len == 5)
        sort_four(pile);
    if  (len == 6)
        sort_five(pile);
    return ;
}

void    sort_big_stack(t_pile *pile)
{
    ff
}