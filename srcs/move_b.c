void    swap_b(t_pile *pile)
{
    t_list  *temp;

    temp = pile->pile_b->next;
    if(ft_lstsize(pile->pile_b) > 2)
    {
        move_at(pile->pile_b, pile->pile_b, 1);
        write(1, "sa\n", 3);
    }
    return ;
}

void    push_b(t_pile *pile)
{
    t_list  *temp;

    temp = pile->pile_b->next;
    if (pile->pile_b)
    {
        move_at(pile->pile_b, pile->pile_a, 0);
        pile-pile_b = temp;
        write(1, "pb\n", 3);
    }
    return ;
}

void    rotate_b(t_pile *pile)
{  
    t_list  *temp;

    temp = pile->pile_b->next;
    move_at(pile->pile_b, pile->pile_b, ft_lstsize(pile->pile_b));
    pile->pile_b->next = NULL;
    pile->pile_b = temp;
    write(1, "rb\n", 3);
    return ;
}

void  reverse_rotate_b(t_pile *pile)
{
    t_list  *temp;
    t_list  *last;
    int     i;

    temp = pile->pile_b;
    while (i < ft_lstsize(pile->pile_b))
    {
        last = temp;
        temp = temp->next;
        i++;
    }
    move_at(pile->pile_b, temp, 0);
    last->next = NULL;
    pile->pile_b = temp;
    write(1, "rrb\n", 4);
    return ;
}