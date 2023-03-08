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

void    check_dup(t_list *lst)
{
    t_list     *tmp;

    tmp->next = content;
    while(*lst)
    {
        while(*tmp)
        {
            if(lst == tmp)
            {
                write(2, "ERROR\n", 6);
                exit(EXIT_FAILURE);
            }
            temp = temp->next;
        }
        lst = lst->next;
        tmp = tmp->lst;
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