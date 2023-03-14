void    db_swap(t_pile *pile)
{
    swap_a(pile);
    swap_b(pile);
    write(1, "ss\n", 3);
}

void    db_rotate(t_pile *pile)
{
    rotate_a(pile);
    rotate_b(pile);
    write(1, "rr\n", 3);
}

void    db_reverse_rotate(t_pile *pile)
{
    reverse_rotate_a(pile);
    reverse_rotate_b(pile);
    write(1, "rrr\n", 4);
}

