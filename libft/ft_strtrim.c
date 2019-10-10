/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:49:42 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/22 16:50:33 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t i;
	size_t len;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
		i++;
	if (!s[i])
		return (ft_strdup(s + i));
	len = ft_strlen((char *)s) - 1;
	while ((s[len] == '\n' || s[len] == '\t' || s[len] == ' ') && len > 0)
		len--;
	return (ft_strsub(s, i, len - i + 1));
}
