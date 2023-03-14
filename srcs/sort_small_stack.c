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
        swap_a(pile);
    if (one > two && one > three && two < three) //312
        rotate_a(pile);
    if (one < two && two > three && three < one) //231
        reverse_rotate_a(pile);
    if (one > two && two > three && one > three) //321
    {
        rotate_a(pile);
        swap_a(pile);
    }
    if (one < three && one < three && two > three) //132
    {
        push_a(pile);
        swap_a(pile);
        push_b(pile);
    }
    return ;
}

void    sort_four(t_pile *pile)
{
    t_list  *temp;
    int     i;

    i = 0;
    while(pile)
    {

    }
    sort_three(pile);
    push_b(pile);
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
