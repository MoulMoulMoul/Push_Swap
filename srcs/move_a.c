void    swap(t_list *to_swap)
{
    t_list  *temp;

    temp = to_swap->next;
    if(ft_lstsize(to_swap) > 2)
        move_at(to_swap, to swap, 1);
    return;
}

void    push_a(t_list *to_push, t_list *at_push)
{
    if (to_push)
    {
        to_push = move_at(at_push, to_push, 0);
    }
    return ;
}

void    rotate_a(t_list *to_rotate)
{  
    t_list  *temp;

    to_rotate->next = temp;
    move_at(to_rotate, to_rotate, ft_lstsize(to_rotate));
    to_rotate->next = NULL;
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
    return ;
}
