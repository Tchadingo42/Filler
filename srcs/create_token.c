/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_token.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:53:38 by chbelan           #+#    #+#             */
/*   Updated: 2019/10/10 12:07:19 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		alloc_token(char ***token, int y)
{
	char	*buf;
	int		i;

	*token = (char **)malloc(sizeof(char *) * (y + 1));
	if (!*token)
		return (NULL);
	i = 0;
	while (i < y)
	{
		get_next_line(1, &buf);
		(*token)[j] = ft_strdup(buf);
		i++;
		ft_strdel(&buf);
	}
	(*token)[j] = NULL;
}

void		generate_token(t_elem *elem)
{
	char	*buf;
	int		i;

	i = 0;
	get_next_line(1, &buf);
	while (ft_isdigit(buf[i]) == 1)
		i++;
	elem->y = ft_atoi(&buf[i]);
	while (ft_isdigit(buf[i]) == 0)
		i++;
	while (ft_isdigit(buf[i]) == 1)
		elem->x = ft_atoi(buf[i]);
	i++;
	ft_strdel(&buf);
	generate_token(&elem->token, elem->y);
}
