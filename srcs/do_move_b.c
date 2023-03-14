void    swap_sb(t_pile *pile)
{
    swap_b(pile);
    write(1, "sb\n", 3);
}

void    push_pb(t_pile *pile)
{
    push_b(pile);
    write(1, "pb\n", 3);
}

void    rotate_rb(t_pile *pile)
{
    rotate_b(pile);
    write(1, "rb\n", 3);
}

void    reverse_rotate_rrb(t_pile *pile)
{
    reverse_rotate_b(pile);
    write(1, "rrb\n", 4);
}