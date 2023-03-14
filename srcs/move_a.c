void    swap_a(t_pile *pile)
{
    t_list  *temp;

    temp = pile->pile_a->next;
    if(ft_lstsize(pile->pile_a) > 2)
    {
        move_at(pile->pile_a, pile->pile_a, 1);
    }
    return ;
}

void    push_a(t_pile *pile)
{
    t_list  *temp;

    temp = pile->pile_a->next;
    if (pile->pile_a)
    {
        move_at(pile->pile_a, pile->pile_b, 0);
        pile-pile_a = temp;
    }
    return ;
}

void    rotate_a(t_pile *pile)
{  
    t_list  *temp;

    temp = pile->pile_a->next;
    move_at(pile->pile_a, pile->pile_a, ft_lstsize(pile->pile_a));
    pile->pile_a->next = NULL;
    pile->pile_a = temp;
    return ;
}

void  reverse_rotate_a(t_pile *pile)
{
    t_list  *temp;
    t_list  *last;
    int     i;

    temp = pile->pile_a;
    while (i < ft_lstsize(pile->pile_a))
    {
        last = temp;
        temp = temp->next;
        i++;
    }
    move_at(pile->pile_a, temp, 0);
    last->next = NULL;
    pile->pile_a = temp;
    return ;
}
