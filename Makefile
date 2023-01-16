# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 17:08:51 by lucida-s          #+#    #+#              #
#    Updated: 2023/01/16 16:52:22 by lucida-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a

SRC =		ft_printf.c	ft_format_c_s.c

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
			rm -f $(NAME)

re:			clean

.PHONY: 	all clean fclean re
