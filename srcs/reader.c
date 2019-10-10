/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 18:48:52 by chbelan           #+#    #+#             */
/*   Updated: 2019/10/10 16:34:47 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		read_bard_lenth(t_elem *elem)
{
	char	*buf;
	int		i;

	get_next_line(1, &buf);
	i = 0;
	while (ft_isdigit(buf[i]) == 0)
		i = i + 1;
	elem->y = ft_atoi(&buf[i]);
	while (ft_isdigit(buf[i]) == 1)
		i = i + 1;
	while (ft_isdigit(&buf) == 0)
		i = i + 1;
	elem->x = ft_atoi(&buf[i]);
	ft_strdel(&buf);
}

void		read_board(t_elem *elem, int y, int x)
{
	char	*buf;
	int		i;
	int		j;
	int		k;

	j = 0;
	while (j < y)
	{
		k = 0;
		get_next_line(1, &buf);
		while (!ft_strchr(".oOXx", &buf[k]))
			k++;
		i = 0;
		while (i < x)
		{
			(elem->board)[j][i] = buf[k];
			(elem->board)[j][i] = INFINITY;
			i++;
			k++;
		}
		j++;
		ft_strdel(&buf);
	}
}
