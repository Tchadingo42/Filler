/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 18:38:36 by chbelan           #+#    #+#             */
/*   Updated: 2019/10/10 18:00:41 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		program(void)
{
	t_elem	elem;

	set_players(&elem);
	read_board_lenght(&elem);
	create_board(&elem, elem.y, elem.x);
	priority_board(&elem, elem.y, elem.x);
	while (get_next_line(1, &elem.buf) > 0)
	{
		remove_line(&elem.buf);
		read_board(&elem, elem.y, elem.x);
		set_token_length(&elem);
		update_priority(&elem);
		players_step(&elem);
	}
}
