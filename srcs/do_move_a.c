void    swap_sa(t_pile *pile)
{
    swap_a(pile);
    write(1, "sa\n", 3);
}

void    push_pa(t_pile *pile)
{
    push_a(pile);
    write(1, "pa\n", 3);
}

void    rotate_ra(t_pile *pile)
{
    rotate_a(pile);
    write(1, "ra\n", 3);
}

void    reverse_rotate_rra(t_pile *pile)
{
    reverse_rotate_a(pile);
    write(1, "rra\n", 4);
}