int     median_20(t_list *lst, int len)
{
    int     i;
    int     median;
    int     value;
    t_list  *temp;
    i = 0;
    median = len / 5;
    temp = lst;
    while(i < median)
    {
        temp = lst->next;
        i++;
    }
    value = lst->content;
    return(value);
}
int     median_40(t_pile *pile, int len)
{
    int     i;
    int     median;
    int     value;
    t_list  *temp;
    i = 0;
    median = len/5*2;
    temp = lst;
    while(i < median)
    {
        temp = lst->next;
        i++;
    }
    value = lst->content;
    return(value);
}

int     median_60(t_pile *pile, int len)
{
    int     i;
    int     median;
    int     value;
    t_list  *temp;
    i = 0;
    median = len/5*3;
    temp = lst;
    while(i < median)
    {
        temp = lst->next;
        i++;
    }
    value = lst->content;
    return(value);
}

int     median_80(t_pile *pile, int len)
{
    int     i;
    int     median;
    int     value;
    t_list  *temp;
    i = 0;
    median = len/5*4;
    temp = lst;
    while(i < median)
    {
        temp = lst->next;
        i++;
    }
    value = lst->content;
    return(value);
}

void    push_swap(t_pile *pile, t_list *lst, int len)
{
    int     i;
    int     median_one;
    int     median_two;
    int     median_three;
    int     median_four;

    i = 0;
    median_one = median_20(lst, len);
    median_two = median_40(lst, len);
    median_three = median_60(lst, len);
    median_four = median_80(lst, len);
    zero_to_twenty(t_pile, median_one, len/5)

}

void    zero_to_twenty(t_pile *pile, int median, int len)
{
    int     i;

    i = 0
    while(i < len)
    {
        if (pile->pile_a->content < median)
            push_pa(pile);
        rotate_ra(pile);
    }
}

void    twenty_to_hundred(t_pile *pile, int ma, int mb, int mc, int len)
{
    int     i;
    int     j;

    i = len/5;
    j = len/5;
    while(i < len/5*3 || j < len/5*3)
    {
        if(pile->pile_a->content > ma && pile->pile_a->content < mb && i < len/5*2) //40
            i = on_bot_b(pile, i);
        if(pile->pile_a->content < ma && pile->pile_a->content < mb && j < len/5*2) //60
            j = on_top_b(pile, j);
        if(pile->pile_a->content > mb && pile->pile_a->content < mc && i >= len/5*2 && i < len/5*3) //80
            i = on_bot_b(pile, i);
        if(pile->pile_a->content < mb && pile->pile_a->content < mc && i >= len/5*2 && j < len/5*3) //100
            j = on_top_b(pile, j);
        rotate_ra(pile);
    }
    return ;
}

int     on_top_b(t_pile *pile, int j)
{
    push_pa(pile);
    j++;
    return(j);
}

int     on_bot_b(t_pile *pile, int i)
{
    push_pa(pile);
    rotate_rb(pile);
    i++;
    return(i);
}