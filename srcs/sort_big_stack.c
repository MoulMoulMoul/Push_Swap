t_list  sorted_list(t_list *lst)
{
    t_list  *cur;
    t_list  *check;
    int     i;

    lst = sort_min_max(lst);
    cur = lst->next;
    check = lst->next;
    i = 1;
    while(cur)
    {
        while(check)
        {
            check = check->next;
            i++;
            if(check < cur)
            {
                move_at(lst, cur, i);
                cur = lst->next;
                check = lst->next;
                i = 1;
            }
        }
    cur = cur->next;
    check = cur;
    }
    return (lst);
}

void  sort_min_max(t_list *lst)
{
    int     min;
    int     max;
    int     i;
    t_list  *temp;

    min = get_min(lst);
    max = get_max(lst);
    temp = lst;
    while (temp)
    {
        if (temp == min)
        {
            move_at(lst, temp, 0);
            lst = temp;
        }
        if (temp == max)
        {
            move_at(lst, temp, ft_lstsize(lst));
            temp = lst;
        }
        temp = temp->next;
    }
    return (lst)
}

int     get_min(t_list *lst)
{
    int     i;

    i = 2147483647;
    while (lst)
    {
        if (lst < i)
            i = lst;
        lst = lst->next;
    }
    return (i);
}

int     get_max(t_list *lst)
{
    int     i;

    i = -2147483648;
    while (lst)
    {
        if (lst > i)
            i = lst;
        lst = lst->next;
    }
    return (i);
}

int     median(t_list *lst)
{

}