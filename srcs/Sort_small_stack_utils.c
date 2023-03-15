void    three_two_one(t_pile *pile)
{
    rotate_ra(pile);
    swap_sa(pile);
    return ;
}

void    one_three_two(t_pile *pile)
{
    rotate_ra(pile);
    rotate_ra(pile);
    return ;
}

void    three_for_four(t_pile *pile)
{

        rotate_ra(pile);
        swap_sa(pile);
        push_pb(pile);
        reverse_rotate_rra(pile);  
}

void    
