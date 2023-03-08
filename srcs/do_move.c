t_list    swap_a(t_list *list_a)
{
    t_list  *temp;

    if (list_a)
    {
        tmp = list_b;
        list_a->next = list_a;
        list_a->next = temp;
        write (1, "sa\n", 3);
    }
    return (list_a);
}

t_list    swap_b(t_list *list_b)
{
    t_list  *tmp;

    if (list_b)
    {
        tmp = list_b;
        list_b->next = list_b;
        list_b->next = temp;
        write (1, "sb\n", 3);
    }
    return (list_b);
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