int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i]) && ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' ')))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

void    check_dup(t_pile *pile)
{
    t_list     *tmp;

    tmp = pile->pile_a->next;
    while(pile->pile_a)
    {
        while(tmp)
        {
            if(pile->pile_a == tmp)
            {
                free_pile(pile)
                write(2, "ERROR\n", 6);
                exit(EXIT_FAILURE);
            }
            tmp = tmp->next;
        }
        pile->pile_a = pile->pile_a->next;
        tmp = pile->pile_a->next;
    }
}

void    check_int(char **lst)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (lst[j])
    {
        j++;
        i = 0;
        if (lst[j][i] == '+' || lst[j][i] == '-')
                i++;
        while(lst[j][i])
        {
            if (lst[j][i] < '0' || ls > '9')
            {
                write(2, "ERROR\n", 6);
                exit(EXIT_FAILURE);
            }
            i++;
        }
    }
}

void	exit_error(t_pile *pile)
{
	free_pile(pile);
	write(2, "Error\n", 6);
	exit (EXIT_FAILURE);
}