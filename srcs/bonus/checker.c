

#include "push_swap_bonus.h"

void	do_actions2(t_pile *pile_a, t_pile *pile_b, int *count, char *action)
{
	if (ft_strcmp(action, "rr\n") == 0)
		*count = pushswap_rr(pile_a, pile_b);
	else if (ft_strcmp(action, "rrr\n") == 0)
		*count = pushswap_rrr(pile_a, pile_b);
	else if (ft_strcmp(action, "sa\n") == 0)
		*count = pushswap_swap(pile_a->size, pile_a->tab);
	else if (ft_strcmp(action, "sb\n") == 0)
		*count = pushswap_swap(pile_b->size, pile_b->tab);
	else if (ft_strcmp(action, "ss\n") == 0)
		*count = pushswap_ss(pile_a, pile_b);
	else if (ft_strcmp(action, "print\n") == 0)
		*count = ft_printab((*pile_a), (*pile_b));
	if (!*count)
	{
		free(action);
		get_next_line(0, 1);
		ft_exit(pile_a, pile_b, 3);
	}
}

void	do_actions1(t_pile *pile_a, t_pile *pile_b, int *count, char *action)
{
	if (ft_strcmp(action, "pb\n") == 0)
		*count = pushswap_push(pile_b, pile_a, pile_a->tab);
	else if (ft_strcmp(action, "pa\n") == 0)
		*count = pushswap_push(pile_a, pile_b, pile_b->tab);
	else if (ft_strcmp(action, "ra\n") == 0)
		*count = pushswap_rotate(pile_a);
	else if (ft_strcmp(action, "rb\n") == 0)
		*count = pushswap_rotate(pile_b);
	else if (ft_strcmp(action, "rra\n") == 0)
		*count = pushswap_rrotate(pile_a);
	else if (ft_strcmp(action, "rrb\n") == 0)
		*count = pushswap_rrotate(pile_b);
}

int	checking(t_pile *pile_a, int total)
{
	int	i;
	int	j;

	i = 0;
	while (i < pile_a->size)
	{
		j = i + 1;
		while (j < pile_a->size)
		{
			if (pile_a->tab[i] > pile_a->tab[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i == total)
		return (0);
	return (1);
}

// char	*get_next_line(i, 0nt fd)
// {
// 	int		i;
// 	int		rd;
// 	char	character;
// 	char	buffer[10000];

// 	i = 0;
// 	rd = 0;
// 	while ((rd = read(fd, &character, 1)) > 0)
// 	{
// 		buffer[i++] = character;
// 		if (character == '\n')
// 			break ;
// 	}
// 	if (i == 0)
// 		return (NULL);
// 	if ((!buffer[i - 1] && !rd) || rd == -1)
// 		return (NULL);
// 	buffer[i] = '\0';
// 	return (ft_strdup(buffer));
// }

void	checker(t_pile *pile_a, t_pile *pile_b)
{
	char	*action;
	int		count;

	action = 0;
	while (1)
	{
		count = 0;
		action = get_next_line(0, 0);
		if (!action)
			break ;
		do_actions1(pile_a, pile_b, &count, action);
		do_actions2(pile_a, pile_b, &count, action);
		free(action);
	}
	get_next_line(0, 1);
	ft_checksort(pile_a, pile_b, pile_a->total);
}

int	main(int ac, char **av)
{
	t_pile	pile_a;
	t_pile	pile_b;
	int		size;

	size = 0;
	if (ac < 2)
		return (1);
	if (ft_checkacav(ac, av))
		return (1);
	pile_a.tab = parse_args(ac, av, &size);
	if (!pile_a.tab)
		return (0);
	pile_a.total = size;
	pile_a.size = size;
	pile_b.tab = malloc(sizeof(int) * pile_a.total);
	if (!pile_b.tab)
	{
		free(pile_a.tab);
		exit(EXIT_FAILURE);
	}
	pile_b.size = 0;
	checker(&pile_a, &pile_b);
	return (0);
}
