/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snarain <snarain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 22:47:48 by snarain           #+#    #+#             */
/*   Updated: 2021/05/22 16:22:21 by snarain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;

	if (!s)
		return (ft_strdup(""));
	s_len = ft_strlen(s);
	if (s_len <= start || !len)
		return (ft_strdup(""));
	if (len > s_len)
		len = s_len;
	(str = malloc(++len));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len);
	return (str);
}
