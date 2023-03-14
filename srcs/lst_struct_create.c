t_pile  *create_pile(char **tab)
{
    int     i;
	t_list	*list_a;
	t_list	*list_b;
	t_pile	*pile;
	
    i = 1;
    while(tab[i])
    {
    	list_a = add_at(lst,(ft_atoi[i]), 0);
    	i++;
    }
	list_b = empty_list();
	pile = malloc(sizeof(t_pile));
	pile->pile_a = list_a;
	pile->pile_b = list_b;
    return (pile);
}

t_list	add_at(t_list *lst, int content, int pos)
{
	t_list	prec;
	t_list	cur;
	t_list	cell;
	int		i;

	prec = lst;
	cur = lst;
	cell = create_cell(content);
	if(is_empty_list(lst) == 0)
		return (cell);
	if(pos == 0)
	{
		cell->next = lst;
		return (cell);
	}
	i = 0;
	while (i < pos)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	prec->next = cell;
	cell->next = cur;
	return (lst);
}

static t_list	*create_cell(int content)
{
	t_list cell;

	cell = malloc(sizeof(t_list));
	if (!cell)
		return(NULL);
	cell->content = content;
	cell->next = NULL;
	return (cell);
}

static t_list	*empty_list(void)
{
	return(NULL);
}

void	*free_pile(t_pile *pile)
{
	t_list *tmp;

	while(pile->pile_a)
	{
		tmp = pile_a->next;
		free(pile->pile_a);
		pile->pile_a = tmp;
	}
	while(pile->pile_b)
	{
		tmp = pile->pile_b->next;
		free(pile->pile_b);
		pile->pile_b = tmp;
	}
	free(pile->pile_a);
	free(pile->pile_b);
	free(pile);
	return ;
}