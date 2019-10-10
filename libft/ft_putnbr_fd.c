/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:16:03 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/17 16:21:04 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	unsigned int value;

	value = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		value = -n;
	}
	if (value >= 10)
	{
		ft_putnbr_fd(value / 10, fd);
		ft_putnbr_fd(value % 10, fd);
	}
	else
		ft_putchar_fd(value + 48, fd);
}
