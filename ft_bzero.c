#include "libft.h"

void	bzero(void *s, size_t n)
{
	size_t		i;
	unsigned char	*s2;
	
	i = 0;
	s2 = (unsigned char *)s;
	while (i < n)
	{
		s2[i] = 0;
		i++;
	}
	s = s2;
}
