# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tromano <tromano@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 15:10:36 by tromano           #+#    #+#              #
#    Updated: 2022/04/05 14:55:48 by tromano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= push_swap.c\
			dlist/dlstaddback.c\
			dlist/dlstaddfront.c\
			dlist/dlstcpy.c\
			dlist/dlstgetcontent.c\
			dlist/dlstnew.c\
			dlist/dlstpushfirst.c\
			dlist/dlstpushlast.c\
			dlist/dsltclear.c\
			dlist/swap.c\
			utils/3num.c\
			utils/do_op.c\
			utils/strtodlst.c\
			utils/checkarg.c\
			utils/checkdouble.c\
			utils/checkorder.c\
			utils/freetab.c\
			dlist/putfirst.c\
			dlist/putlast.c\
			dlist/pushsmallest.c\
			utils/5num.c\
			utils/stoopid.c\
			utils/stoopid2.c\
			utils/stoopid3.c\
			utils/stoopid4.c\
			dlist/pushbiggest.c\
			utils/4num.c\
			utils/algo.c

			

OBJS        =    ${SRCS:.c=.o}
NAME        =    push_swap
AR          =    ar rcs
GCC         =    gcc
RM          =    rm -f
CFLAGS      =    -Wall -Wextra -Werror -fsanitize=address -g
LBFT_PATH   =	 ../libft/
PRINT_PATH	=	 ../ft_printf_final/
FRAMLIBS    =    -L ${LBFT_PATH} -lft -L ${PRINT_PATH} -lft

all:		$(NAME)

.c.o:
			$(GCC) $(CFLAGS) -I. -I ${LBFT_PATH} -c $< -o $@

$(NAME):	$(OBJS)
			@$(MAKE) -C $(LBFT_PATH)
			@$(MAKE) -C $(PRINT_PATH)
			$(GCC) $(OBJS) $(CFLAGS) -o $(NAME) $(FRAMLIBS)

clean:
			${RM} ${OBJS}
			@$(MAKE) -C $(LBFT_PATH) clean
			@$(MAKE) -C $(PRINT_PATH) clean

fclean:        clean
			${RM} ${NAME}
			@$(MAKE) -C $(LBFT_PATH) fclean
			@$(MAKE) -C $(PRINT_PATH) fclean

re:			fclean all

.PHONY:		all clean fclean re
