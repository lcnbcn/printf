# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 17:08:51 by lucida-s          #+#    #+#              #
#    Updated: 2022/12/16 19:02:10 by lucida-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a

SRC =		ft_printf.c	

OBJS =		$(SRC:.c=.o)

HEADER =	libftprint.h

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
