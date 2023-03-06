NAME		= push_swap
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra

SRCS_DIR	= srcs/
OBJS_DIR	= objs/
LIB_DIR		= libft
INCLUDE		= include/

SRCS		= main.c

OBJS		= $(SRCS:%.c=$(OBJS_DIR)/%.o)

all : $(NAME)

$(NAME): $(OBJS) $(LIB_DIR)/$(LIB_DIR).a
			$(CC) $(CFLAGS) -o $@ $^

$(OBJS): $(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
			$(CC) $(CFLAGS) -I$(INCLUDE) -I$(LIB_DIR)/include -c $< -o $@

$(LIB_DIR)/$(LIB_DIR).a:
			$(MAKE) -C $(LIB_DIR)

clean:
	rm -rf $(OBJS_DIR)
	$(MAKE) -C $(LIB_DIR) clean

fclean: clean
	rm -rf $(NAME)
	$(MAKE) -C $(LIB_DIR) fclean

re: fclean all

.PHONY: all clean fclean re