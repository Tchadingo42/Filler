/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 20:18:49 by chbelan           #+#    #+#             */
/*   Updated: 2019/10/09 21:20:19 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		create_board(t_elem *elem, int y, int x)
{
	int		i;

	elem->board = (char **)malloc(sizeof(char *) * (y + 1));
	if (!elem->board)
		return (NULL);
	i = 0;
	while (i < y)
	{
		elem->board[i] = (char *)malloc(sizeof(char) * x);
		if (!elem->board[i])
			return (NULL);
		i = i + 1;
	}
	(elem->board)[i] = NULL;
}
