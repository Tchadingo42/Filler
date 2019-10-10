/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:48:34 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/23 16:46:11 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			str[i] = (*f)(str[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
