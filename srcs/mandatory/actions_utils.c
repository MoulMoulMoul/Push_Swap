

#include "push_swap.h"

void	ft_rotatedown(t_pile *pile)
{
	int	temp;

	temp = pile->size;
	while (--temp > 0)
		pile->tab[temp] = pile->tab[temp - 1];
}

void	ft_rotateup(t_pile *pile)
{
	int	temp;

	temp = -1;
	while (++temp < pile->size - 1)
		pile->tab[temp] = pile->tab[temp + 1];
}

void	ft_pushmin(t_pile *pile, char c)
{
	if (ft_getmin((*pile)) > pile->size / 2)
		while (ft_getmin((*pile)) != 0)
			pushswap_rrotate(pile, c, c);
	else
		while (ft_getmin((*pile)) != 0)
			pushswap_rotate(pile, c, c);
}

void	pushswap_rrr(t_pile *pile_a, t_pile *pile_b, int x)
{
	pushswap_rrotate(pile_a, '0', 0);
	pushswap_rrotate(pile_b, 'x', x);
}

void	pushswap_rr(t_pile *pile_a, t_pile *pile_b, int x)
{
	pushswap_rotate(pile_a, '0', 0);
	pushswap_rotate(pile_b, 'x', x);
}
