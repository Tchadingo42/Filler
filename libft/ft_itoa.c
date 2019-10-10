/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:00:24 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/23 16:48:13 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_int_len(int n)
{
	int			q;
	int			i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		q = n % 10;
		n = n - q;
		n = n / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int			q;
	int			len;
	char		*toa;

	len = ft_int_len(n);
	toa = (char *)malloc(sizeof(char) * (len + 1));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0 || !toa)
		return (ft_strdup("0"));
	if (n < 0)
	{
		toa[0] = '-';
		n = -n;
	}
	toa[len] = '\0';
	while (n > 0)
	{
		toa[len - 1] = n % 10 + '0';
		q = n % 10;
		n = n - q;
		n = n / 10;
		len--;
	}
	return (toa);
}
