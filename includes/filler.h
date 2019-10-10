/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 17:08:36 by chbelan           #+#    #+#             */
/*   Updated: 2019/10/10 18:11:28 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FILLER_H
# define FILLER_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"
# define INFINITY 2147483647 

// board    -> max_x * max_y
// priority -> priority map (max_x * max_y)
// token    -> token_x * token_y 
// buf     -> tmp line for save extra lines 
// chbelan   -> (tchadingo player (X or O)
// ia       -> ia oponent
// max_x    -> maximun x size of the board
// max_y    -> maximun y size of the board
// token_x  -> value x of the token
// token y  -> value y of the token
// step_x   -> last coord x print by the vm
// step_y   -> last coord y print by the vm

typedef struct			s_elem
{
	int					**priority;
	char				**board;
	char				**token;
	char				*buf;
	int					token_x;
	int					token_y;
	int					x;
	int					y;
	int					dot;
	int					step_x;
	int					step_y;
	char				chbelan;
	char				ia;
}						t_elem;

void					program(void);
void					set_players(t_elem *player);
void					read_board_lenght(t_elem *elem);
void					create_board(t_elem *elem, int y, int x);
int						priority_board(t_elem *board, int y, int x);
int						remove_line(char **board);
void					read_board(t_elem *elem, int y ,int x);
void					alloc_token(char ***token, int y);
void					generate_token(t_elem *elem);
void					update(t_elem *elem, int y, int x);
void					set_priority(t_elem *elem);
int						lowest_value(int value_1, int value_2);
int						absolue_value(int value);
void					player_step(t_elem *elem);

#endif
