/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 11:29:01 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/14 17:22:01 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	while (*tab)
	{
		ft_putstr2(*tab++);
	}
}
