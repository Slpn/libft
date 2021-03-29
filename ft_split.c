/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snarain <snarain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:47:34 by snarain           #+#    #+#             */
/*   Updated: 2021/03/30 00:22:36 by snarain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sizeword(char const *str, char c)
{
	int	size;

	size = 0;
	while (*str && *str != c)
	{
		str++;
		size++;
	}
	return (size);
}

int	countword(char const *str, char c)
{
	int	word;
	int	state;

	word = 0;
	state = 1;
	while (*str)
	{
		if (*str == c)
			state = 1;
		else
		{
			if (state == 1)
				++word;
			state = 0;
		}
		++str;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		wordslen;
	char	**tab;

	wordslen = countword(s, c);
	tab = (char **)malloc(sizeof(char *) * wordslen + 1);
	if (!tab)
		return (NULL);
	i = -1;
	while (*s && ++i < wordslen)
	{
		while (*s && *s == c)
			++s;
		tab[i] = (char *)malloc(sizeof(char) * sizeword(s, c) + 1);
		if (!tab[i])
			return (NULL);
		j = 0;
		while (*s && *s != c)
			tab[i][j++] = *s++;
		tab[i][j] = 0;
	}
	tab[wordslen] = 0;
	return (tab);
}
