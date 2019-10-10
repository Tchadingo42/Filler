/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:10:22 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/23 16:45:23 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_octets_counter2(const char *str, char c)
{
	size_t	size;

	size = 0;
	while (*str && *str != c)
	{
		str++;
		size++;
	}
	return (size);
}

char		*ft_strtok(const char *src, char delim)
{
	char	*dest;
	size_t	size;

	size = ft_octets_counter2(src, delim);
	if (size <= 0)
		return (0);
	dest = (char*)malloc(sizeof(char) * size + 1);
	if (dest == NULL)
		return (NULL);
	ft_strncpy(dest, src, size);
	dest[size] = '\0';
	return (dest);
}
