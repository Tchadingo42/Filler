/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:48:48 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/23 16:46:23 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (s)
	{
		i = ft_strlen((char *)s);
		if (!(str = (char *)malloc(sizeof(char) * i + 1)))
			return (NULL);
		i = 0;
		ft_strcpy(str, (char *)s);
		while (str[i])
		{
			str[i] = (*f)(i, str[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
