/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:27:00 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/23 16:49:32 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_listdup(t_list *head)
{
	char	*str;
	size_t	i;

	i = 0;
	if (head == NULL)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * ft_list_size(head + 1))))
		return (NULL);
	while (head != NULL)
	{
		str[i] = (char)head->content;
		head = head->next;
		i++;
	}
	str[i] = '\0';
	return (str);
}
