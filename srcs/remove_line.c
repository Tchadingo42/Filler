/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:40:22 by chbelan           #+#    #+#             */
/*   Updated: 2019/10/09 21:45:34 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			remove_line(char **board)
{
	if (!ft_strncmp(*board, "Plateau", 7))
	{
		ft_strdel(board);
		get_next_line(1, board);
	}
	ft_strdel(board);
	return (0);
}
