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
