#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct s_list
{
	int			    content;
	struct s_list	*next;
}					t_list;

typedef struct s_pile
{
	t_list		*pile_a;
	t_list		*pile_b;
}					t_pile;

static t_list	*create_cell(int data)
t_list          *empty_list(void);
t_list          *add_at(t_list *lst, int data, int pos);
t_list          *free_at(t_list *lst, int pos);
t_list          *free_list(t_list *lst);
int             is_empty_list(t_list *lst);
int             ft_lstsize(t_list *lst);


#endif