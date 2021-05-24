/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snarain <snarain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:06:13 by snarain           #+#    #+#             */
/*   Updated: 2021/05/21 17:20:10 by snarain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned int	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (((unsigned char *)src) < ((unsigned char *)dest))
		while (len-- > 0)
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	else
	{
		while (i < len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (((unsigned char *)dest));
}
