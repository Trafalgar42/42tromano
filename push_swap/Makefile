# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tromano <tromano@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 15:10:36 by tromano           #+#    #+#              #
#    Updated: 2022/03/03 15:20:15 by tromano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c\

OBJS        =    ${SRCS:.c=.o}
NAME        =    push_swap
AR          =    ar rcs
GCC         =    gcc
RM          =    rm -f
CFLAGS      =    -Wall -Wextra -Werror
LBFT_PATH   =    ../libft/
FRAMLIBS    =    -L ${LBFT_PATH} -lft

all:		$(NAME)

.c.o:
			$(GCC) $(CFLAGS) -I. -I ${LBFT_PATH} -c $< -o $@

$(NAME):	$(OBJS)
			@$(MAKE) -C $(LBFT_PATH)
			$(GCC) $(OBJS) $(CFLAGS) -o $(NAME) $(FRAMLIBS)

clean:
			${RM} ${OBJS}
			@$(MAKE) -C $(LBFT_PATH) clean

fclean:        clean
			${RM} ${NAME}
			@$(MAKE) -C $(LBFT_PATH) fclean

re:			fclean all

.PHONY:		all clean fclean re
