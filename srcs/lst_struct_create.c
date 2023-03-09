t_list  *create_list_a(t_list *list_a; char **tab)
{
    int     i;

    i = 1;
    while(tab[i])
    {
    list_a = add_at(list_a,(ft_atoi[i]), 0);
    i++;
    }
    return (list_a);
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

t_list	*empty_list(void)
{
	return(NULL);
}