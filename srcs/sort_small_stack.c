sort_two(t_list *lst)
{
    t_list  *temp;

    temp = lst->next;
    if (lst > temp)
        write (2, "sa\n", 3);
    exit(EXIT_SUCCESS);
}

void    sort_three(t_pile *pile)
{
    t_list  *one;
    t_list  *two;
    t_list  *three;

    one = pile->pile_a->content;
    two = pile->pile_a->next->content;
    three = pile->pile_a->next->next->content;
    if (one < two && two < three) //123
        exit(EXIT_SUCCESS);
    if (one > two && two < three && one < three) //213
        swap_sa(pile);
    if (one > two && one > three && two < three) //312
        rotate_ra(pile);
    if (one < two && two > three && three < one) //231
        reverse_rotate_rra(pile);
    if (one > two && two > three && one > three) //321
        three_two_one(pile);
    if (one < three && one < three && two > three) //132
        one_three_two(pile);
    return ;
}

void    three_two_one(t_pile *pile)
{
    rotate_ra(pile);
    swap_sa(pile);
    return ;
}

void    one_three_two(t_pile *pile)
{
    push_pa(pile);
    push_sa(pile);
    push_pb(pile);
    return ;
}

void    sort_four(t_pile *pile)
{
    int     i;

    i = 0;
    push_pa(pile);
    sort_three(pile);
    if 
    return ;
}

void    sort_five(t_pile *pile)
{
    tt
}

123 ok
132 ok
312 ok
213 ok
231 ok
321 ok

1234
1243
1342
2341
