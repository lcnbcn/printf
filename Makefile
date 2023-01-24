# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 17:08:51 by lucida-s          #+#    #+#              #
#    Updated: 2023/01/24 18:45:09 by lucida-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a

SRC =		ft_printf.c	ft_format_c_s.c ft_format_i_d_u.c

OBJS =		$(SRC:.c=.o)

HEADER =	ft_printf.h

MKFILE =	Makefile

LIB = 		ar -rcs

CFLAGS =	-Wall -Werror -Wextra

all:
			@$(MAKE) $(NAME)

%.o:		%.c $(HEADER) $(MKFILE)
			cc $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(LIB) $(NAME) $^

clean:
			rm -f $(OBJS)

fclean:
			rm -f $(NAME) $(OBJS)

re:			fclean all

.PHONY: 	all clean fclean re
