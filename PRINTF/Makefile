# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tromano <tromano@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 17:37:52 by tromano           #+#    #+#              #
#    Updated: 2021/11/23 13:56:02 by tromano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_strlen.c\
			ft_putstr.c\
			ft_putchar.c\
			ft_handle_c.c\
			ft_handle_d.c\
			ft_handle_i.c\
			ft_handle_p.c\
			ft_handle_percent.c\
			ft_handle_s.c\
			ft_handle_u.c\
			ft_handle_x.c\
			ft_handle_xmaj.c\
			ft_atoi.c\
			ft_atoi_base.c\
			ft_atoi_base_min.c\
			ft_atoi_unsigned.c\
			ft_printf.c
			
OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a
LIBC	= ar rc
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror 

all: ${NAME}

${NAME}:	${OBJS}
			${LIBC} ${NAME} ${OBJS}

clean:	clean_bonus
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re			
			
			