#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		if (*(char *)(src + i) == (char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
