/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snarain <snarain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:05:31 by snarain           #+#    #+#             */
/*   Updated: 2021/05/21 18:49:05 by snarain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*src_cpy;
	unsigned char	*dst_cpy;

	src_cpy = (unsigned char *)src;
	dst_cpy = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		dst_cpy[i] = src_cpy[i];
		if (dst_cpy[i] == (unsigned char)c)
			return (dst_cpy + i + 1);
		i++;
	}
	return (NULL);
}
