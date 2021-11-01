# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tromano <tromano@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 14:14:11 by tromano           #+#    #+#              #
#    Updated: 2021/10/30 17:28:50 by tromano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= ft_strlen.c\
			ft_putchar_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_atoi.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strlcat.c\
			ft_strjoin.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_putendl_fd.c
			
# ft_strlcpy.c\
# ft_strdup.c\
# ft_calloc.c\
# ft_substr.c\
# ft_split.c\
# ft_strtrim.c\
# ft_itoa.c\
# ft_striteri.c\
# ft_strmapi.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a
LIBC	= ar rc
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror 



${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	clean

re: fclean all

.PHONY: all clean fclean re .c.o