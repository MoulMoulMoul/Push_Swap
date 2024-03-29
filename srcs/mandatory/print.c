

#include "push_swap.h"

void	ft_printab(t_pile pile_a, t_pile pile_b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < pile_a.size - pile_b.size)
	{
		ft_printf("%r%i%0\t%g%i%0\t\t\t\n", i, pile_a.tab[i]);
		i++;
	}
	while (j < pile_b.size - pile_a.size)
	{
		ft_printf("\t\t%0%b%i%\t%r%i%0\t\n", pile_b.tab[j], j);
		j++;
	}
	while (i < pile_a.size && j < pile_b.size)
	{
		ft_printf("%r%i%0\t%g%i%0\t%b%i%0\t%r%i%0\t\n", i, pile_a.tab[i],
			pile_b.tab[j], j);
		i++;
		j++;
	}
	ft_printf("%i\tPILE A\tPILE B\t%i\n", pile_a.size, pile_b.size);
}
