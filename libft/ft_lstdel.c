/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:58:26 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/23 16:47:51 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*current;
	t_list		*post;

	current = *alst;
	while (current != NULL)
	{
		post = current->next;
		del(current->content, current->content_size);
		free(current);
		current = post;
	}
	*alst = NULL;
}
