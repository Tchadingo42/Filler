/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 14:13:47 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/23 16:45:32 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *haystack, const char *needle)
{
	char	*ret;
	int		i;
	int		len;

	ret = (char *)haystack;
	len = ft_strlen(needle);
	i = 0;
	while (i < len && *ret != '\0')
	{
		if (*ret == needle[i])
			i++;
		else if (i > 0)
		{
			ret -= (i - 1);
			i = 0;
		}
		ret++;
	}
	if (i < len)
		return (NULL);
	return (ret - i);
}
