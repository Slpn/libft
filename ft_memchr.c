#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s2;

	s2 = s;
	if (!n)
		return (0);
	while (n-- > 0)
		if (*s2++ == (unsigned char)c)
			return ((void *)--s2);
	return (0);
}
