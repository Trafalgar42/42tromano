# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tromano <tromano@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 14:14:11 by tromano           #+#    #+#              #
#    Updated: 2021/11/11 16:13:37 by tromano          ###   ########.fr        #
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
			ft_putendl_fd.c\
			ft_strlcpy.c\
			ft_strdup.c\
			ft_calloc.c\
			ft_substr.c\
			ft_split.c\
			ft_strtrim.c\
			ft_itoa.c\
			ft_striteri.c\
			ft_strmapi.c

SRCS_BONUS	= $(SRCS) \
				ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstiter.c\
				ft_lstclear.c\
				ft_lstmap.c
							
OBJS	= ${SRCS:.c=.o}
OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

NAME	= libft.a
LIBC	= ar rc
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror 

all: ${NAME} bonus

${NAME}:	${OBJS}
			${LIBC} ${NAME} ${OBJS}

bonus:	${OBJS_BONUS} 
		${LIBC} ${NAME} ${OBJS_BONUS}

clean_bonus:
			${RM} ${OBJS_BONUS}

clean:	clean_bonus
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re