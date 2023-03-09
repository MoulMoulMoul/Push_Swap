t_list	move_at(t_list *lst, t_list *content, int pos)
{
	t_list	prec;
	t_list	cur;
	int		i;

	prec = lst;
	cur = lst;
	if(pos == 0)
	{
		content->next = lst;
		return (content);
	}
	i = 0;
	while (i < pos)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	prec->next = content;
	content->next = cur;
	return (lst);
}

int	is_empty_list(t_list *lst)
{
	if (lst == NULL)
		return (1);
	return (0);
}

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_list	*free_list(t_list *lst)
{
	t_list *tmp;

	tmp = NULL;
	while(lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	return (lst);
}