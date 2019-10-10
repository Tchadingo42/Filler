/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 18:50:02 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/23 16:46:56 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dest, const void *src, size_t len)
{
	const char	*src_tmp;
	char		*dest_tmp;
	size_t		i;

	i = -1;
	src_tmp = src;
	dest_tmp = dest;
	if (src_tmp < dest_tmp)
		while ((int)(--len) >= 0)
			*(dest_tmp + len) = *(src_tmp + len);
	else
		while (++i < len)
			*(dest_tmp + i) = *(src_tmp + i);
	return (dest);
}
