/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   priority_board.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:33:33 by chbelan           #+#    #+#             */
/*   Updated: 2019/10/10 18:00:07 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ABS(x) ((x < 0) ? -(x) : (x))
#include "filler.h"

void		update(t_elem *elem, int y , int x)
{
	int		tmp;
	int		i;
	int		j;

	elem->priority[y][x] = 0;
	j = -1;
	while (++j < elem->y)
	{
		i = -1;
		while (++i < elem->x)
		{
			if (elem->board[j][i] != elem->ia)
			{
				tmp = ABS(j - y) + ABS(i - x);
				elem->priority[j][i] = ft_min(tmp, elem->priority[j][i]);
			}
		}
	}
}

void		set_priority(t_elem *elem)
{
	int		i;
	int		j;

	j = 0;
	while (j < elem->y)
	{
		i = 0;
		while (i < elem->x)
		{
			if (elem->board[i][j] == elem->ia)
				update(elem, j, i);
			i++;
		}
		j++;
	}
	elem->dot = INFINITYl;
	elem->step_y = 0;
	elem->step_x = 0;
}
