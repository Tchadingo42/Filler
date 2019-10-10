/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 17:27:38 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/23 16:45:41 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	lensrc;
	char	*dest;
	char	*src;

	dest = (char *)haystack;
	src = (char *)needle;
	lensrc = ft_strlen(src);
	while (*dest && len >= lensrc)
	{
		if (ft_memcmp(dest, src, lensrc) == 0)
			return (dest);
		dest++;
		len--;
	}
	return (NULL);
}
