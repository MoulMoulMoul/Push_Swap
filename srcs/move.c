t_list    swap(t_list *to_swap)
{
    t_list  *temp;

    temp = to_swap->next;
    if(ft_lstsize(to_swap) > 2)
        move_at(to_swap, to swap, 1);
    return (temp);
}

t_list    push(t_list *to_push, t_list *at_push)
{
    t_list  *temp;

    temp
    if (to_push)
    {

    }
}

t_list    rotate(t_list *to_rotate)
{  
    t_list  *temp;

    to_rotate->next = temp;
    move_at(to_rotate, to_rotate, ft_lstsize(to_rotate));
    to_rotate->next = NULL;
    return (temp);
}

t_list  reverse_rotate(t_list *to_rotate)
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
    return (temp);
}