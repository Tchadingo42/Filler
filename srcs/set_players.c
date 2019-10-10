/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_players.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:25:12 by chbelan           #+#    #+#             */
/*   Updated: 2019/10/09 20:31:04 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		set_players(t_elem *player)
{
	char	*buf;

	get_next_line(1, &buf);
	if (strncmp("$$$ exec p1 :", buf, 13))
	{
		player->chbelan = 'X';
		player->ia = 'O';
	}
	else
	{
		player->chbelan = 'O';
		player->ia = 'X';
	}
}
