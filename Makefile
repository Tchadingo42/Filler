#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chbelan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 11:36:01 by chbelan           #+#    #+#              #
#    Updated: 2019/10/09 21:43:52 by chbelan          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

ED			:=	$(shell tput setaf 1)
GREEN		:=	$(shell tput setaf 2)
BLUE		:=	$(shell tput setaf 4)
YELLOW		:=	$(shell tput setaf 3)
PURPLE		:=	$(shell tput setaf 5)
RESET		:=	$(shell tput setaf 7)

NAME		=	chbelan.filler	

CC			=	gcc

CFLAGS		+=	-Wall -Wextra -Werror
CFLAGS		+=	-I ./includes/ 

SRCS		=	srcs/main.c				\
				srcs/reader.c			\
				srcs/set_players.c		\
				srcs/program.c			\
				srcs/create_board.c		\
				srcs/priority_board.c	\
				srcs/remove_line.c		\

OBJS		=	$(SRCS:.c=.o)
	

COMPCOLOR	=	$(GREEN)

all:		$(NAME)

$(NAME):	$(OBJS)
	@$(CC) -o $@ $(CFLAGS) $(CPPFLAGS) $(OBJS) libft/libft.a && \
		echo $(PURPLE)[$(NAME)]$(RESET)"	: created"

%.o:		%.c
	@$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@ &> /dev/null	&& \
		echo $(COMPCOLOR)[OK]$(RESET)"		: "$@			|| \
		(echo $(RED)[KO]$(RESET)"		: "$@				;  \
		$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@ ; exit 1)

debug:		CPPFLAGS += -ggdb
debug:		COMPCOLOR = $(YELLOW)
debug:		re

clean:
	@rm $(OBJS) &> /dev/null && \
		echo $(BLUE)[OBJ]$(RESET)"		: cleaned" ; (exit 0)


fclean:		clean
	@rm $(NAME) &> /dev/null && \
		echo $(BLUE)[BIN]$(RESET)"		: removed" ; (exit 0)

re:			fclean all

.PHONY:		all clean fclean debug re
