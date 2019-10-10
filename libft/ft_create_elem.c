/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:49:13 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/23 16:49:57 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_create_elem(void *node)
{
	t_list	*head;

	head = NULL;
	if (!(head = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	head->content = node;
	head->next = NULL;
	return (head);
}
