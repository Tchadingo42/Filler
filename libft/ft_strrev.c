/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 15:31:21 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/17 15:55:22 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	char	tmp;
	int		start;
	int		end;

	start = 0;
	end = 0;
	while (str[end])
	{
		end++;
	}
	end--;
	while (end > start)
	{
		tmp = str[end];
		str[end] = str[start];
		str[start] = tmp;
		start++;
		end--;
	}
	return (str);
}
