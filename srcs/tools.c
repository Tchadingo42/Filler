/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:13:46 by chbelan           #+#    #+#             */
/*   Updated: 2019/10/10 16:36:39 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		lowest_value(int value_1, int value_2)
{
	if (value_1 > value_2)
		return (value_2);
	else
		return (value_1);
}

int		absolue_value(int value)
{
	return (value < 0 ? -value : value);
}
