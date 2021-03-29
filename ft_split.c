/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snarain <snarain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:47:34 by snarain           #+#    #+#             */
/*   Updated: 2021/03/28 00:08:57 by snarain          ###   ########.fr       */
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
	int		index;
	int		i;
	int		words;
	char	**ret;

	words = countword(s, c);
	ret = (char **)malloc(sizeof(char *) * words + 1);
	index = -1;
	while (*s && ++index < words)
	{
		while (*s && *s == c)
			++s;
		ret[index] = (char *)malloc(sizeof(char) * sizeword(s, c) + 1);
		i = 0;
		while (*s && *s != c)
			ret[index][i++] = *s++;
		ret[index][i] = 0;
	}
	ret[index] = 0;
	return (ret);
}
