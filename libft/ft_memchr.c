/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 21:25:35 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/15 20:16:50 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	car;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	car = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == car)
			return (str + i);
		i++;
	}
	return (NULL);
}
