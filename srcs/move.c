void    swap(t_list *to_swap)
{
    t_list  *temp;

    temp = to_swap->next;
    if(ft_lstsize(to_swap) > 2)
        move_at(to_swap, to swap, 1);
}

void    db_swap(t_pile *pile)
{
    swap(pile->pile_a);
    swap(pile->pile_b);
}

void    push(t_list *to_push, t_list *at_push)
{
    if (to_push)
    {
        to_push = move_at(at_push, to_push, 0);
    }
}

void    rotate(t_list *to_rotate)
{  
    t_list  *temp;

    to_rotate->next = temp;
    move_at(to_rotate, to_rotate, ft_lstsize(to_rotate));
    to_rotate->next = NULL;
}

void    db_rotate(t_pile *pile)
{
    rotate(pile->pile_a);
    rotate(pile->pile_b);
}

void  reverse_rotate(t_list *to_rotate)
{
    t_list  *temp;
    t_list  *last;
    int     i;

    while (i < ft_lstsize(to_rotate))
    {
        last = temp;
        temp = temp->next;
        i++;
    }
    move_at(to_rotate, temp, 0);
    last->next = NULL;
}

void    db_reverse_rotate(t_pile *pile)
{
    reverse_rotate(pile->pila_a);
    reverse_rotate(pile->pile_b);
}