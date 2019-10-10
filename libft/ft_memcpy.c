/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:31:13 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/21 16:53:21 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	size_t	i;

	str = (char*)dst;
	i = 0;
	while (i < n)
	{
		*(char *)str = *(char *)src;
		str++;
		src++;
		i++;
	}
	return (dst);
}
