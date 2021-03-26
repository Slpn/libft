/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snarain <snarain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:06:13 by snarain           #+#    #+#             */
/*   Updated: 2021/03/26 15:06:14 by snarain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*s1;
	const unsigned char		*s2;

	s1 = dest;
	s2 = src;
	if (dest == src)
		return (dest);
	if (s2 < s1)
	{
		s1 += n;
		s2 += n;
		while (n-- > 0)
			*--s1 = *--s2;
	}
	else
		while (n-- > 0)
			*++s1 = *++s2;
	return (dest);
}
