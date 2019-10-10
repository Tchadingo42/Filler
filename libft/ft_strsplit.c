/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:44:43 by chbelan           #+#    #+#             */
/*   Updated: 2018/11/23 16:45:05 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		octets_cnt(char const *s, char c, size_t i)
{
	size_t			size;

	size = 0;
	while (s[i] != c && s[i])
	{
		i++;
		size++;
	}
	return (size);
}

static size_t		words_cnt(char const *s, char c)
{
	size_t			i;
	size_t			cnt;
	size_t			words;

	i = 0;
	cnt = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
			cnt = 0;
		else if (s[i] != c && cnt == 0)
		{
			words++;
			cnt = 1;
		}
		i++;
	}
	return (words);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**tab;
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	j = 0;
	if (!s || !(tab = malloc(sizeof(*tab) * (words_cnt(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		k = 0;
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			if (!(tab[j] = malloc(sizeof(**tab) * (octets_cnt(s, c, i) + 1))))
				return (NULL);
			while (s[i] != c && s[i] != '\0')
				tab[j][k++] = s[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}
