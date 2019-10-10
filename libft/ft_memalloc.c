/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:32:22 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/23 16:49:15 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
		return (NULL);
	while (size--)
		str[size] = 0;
	return ((void *)str);
}
