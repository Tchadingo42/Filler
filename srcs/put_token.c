/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_token.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:01:24 by chbelan           #+#    #+#             */
/*   Updated: 2019/10/10 18:09:37 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		insert_token(t_elem *elem, int y, int x)
{
	int	i;
	int	j;
	int	match;

	match = 0;
	j = -1;
	while (++j < elem->y)
	{
		i = -1;
		while (i++ < elem->x)
		{
			if (elem->token[j][i] == '*')
			{
				if (elem->board[j + x][i + x] == (elem->player))
				{
					match++;
					if (match > 1)
						return (0);
				}
				else if (elem->board[y + j][x + i] == (elem->ia))
					return (0);
			}
		}
	}
	return (match == 1 ? 1 : 0);
}

void		check_priority(t_elem *elem, int res, int y, int x)
{
	elem->dot = res;
	elem->s
