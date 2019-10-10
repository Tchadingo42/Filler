#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chbelan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/14 15:53:55 by chbelan           #+#    #+#              #
#    Updated: 2018/11/21 16:44:08 by chbelan          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME            = libft.a

SRC_PATH        = srcs

SRCS            = $(shell ls | grep -E ".+\.c")

INC             = -I ./

CC              = gcc

LIBS_FLAGS      = ar r

FLAGS           = -Wall -Wextra -Werror

OBJS            = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	@$(LIBS_FLAGS) $(NAME) $(OBJS)
	
%.o: %.c
	@$(CC) $(INC) -o $@ -c $< $(FLAGS)

all: $(NAME)

clean:
	@rm -rf $(OBJS)

fclean          : clean
	@rm -rf $(NAME)

re              : fclean all
.PHONY: fclean re all clean
