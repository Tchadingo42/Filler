/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:01:04 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/15 18:46:31 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *str2;

	if ((str2 = ((char*)malloc(sizeof(*str2) * (ft_strlen(s) + 1)))) == NULL)
		return (NULL);
	ft_strcpy(str2, s);
	return (str2);
}
