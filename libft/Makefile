# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoulin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 10:10:02 by nmoulin           #+#    #+#              #
#    Updated: 2022/11/30 20:51:14 by nmoulin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

all:			$(NAME)

so:
	gcc -nostartfiles -shared -o libft.so ${CFLAGS} ${SRCS} ${BONUS}

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus

NAME		=	libft.a

DIR_SRCS	=	srcs/
DIR_OBJS	=	objs/

SRCS 		= 	ft_atoi.c \
ft_tolower.c \
ft_toupper.c \
ft_itoa.c \
ft_isalpha.c \
ft_isascii.c \
ft_isalnum.c \
ft_isdigit.c \
ft_isprint.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlen.c \
ft_strncmp.c \
ft_strcmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_strmapi.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_swap.c \
ft_bzero.c \
ft_memcpy.c \
ft_memset.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_calloc.c \
ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c \
get_next_line.c \
get_next_line_utils.c \
ft_printf.c \
ft_printf_utils.c

SOURCE		=	$(addprefix ${DIR_SRCS}, ${SRCS})
OBJS		=	$(subst ${DIR_SRCS}, ${DIR_OBJS}, $(SOURCE:.c=.o))

INCLUDES	=	-I includes

CC			=	@cc
CFLAGS		=	-Wall -Wextra -Werror

all:		$(NAME)

$(DIR_OBJS)%.o :	$(DIR_SRCS)%.c | $(DIR_OBJS)
			$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(DIR_OBJS):
	mkdir -p $(DIR_OBJS)

$(NAME):	$(OBJS)
			@ar -rcs $(NAME) $(OBJS)

clean:
			@rm -rf $(OBJS)
			@rm -rf $(DIR_OBJS)

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
.SILENT:
.DEFAULT: