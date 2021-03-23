#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	int		i;
	unsigned char	*pdst;
		
	pdst = dst;
	i = 0;
		
	while (i < (int)n)
	{
		((char*)dst)[i] = ((char*)src)[i];
			if (pdst[i] == (unsigned char)c)
				return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
