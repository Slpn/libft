#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		a;

	if (!b)
		return (NULL);
	a = 0;
	while (a < len)
	{
		*(unsigned char *)(b + a) = (unsigned char)c;
		a++ ;
	}
	return (b);
}
