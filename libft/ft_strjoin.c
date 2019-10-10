/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:28:16 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/22 17:58:53 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;

	if (s1 && s2)
	{
		if (s1 == NULL || s1 == NULL)
			return (NULL);
		if (s1 == NULL)
			return (ft_strdup(s2));
		if (s2 == NULL)
			return (ft_strdup(s1));
		if (!(str = ft_strnew(ft_strlen((char *)s1) + ft_strlen((char *)s2))))
			return (NULL);
		ft_strcpy(str, (char *)s1);
		ft_strcat(str, (char *)s2);
		return (str);
	}
	return (NULL);
}
