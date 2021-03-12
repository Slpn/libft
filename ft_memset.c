#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	size_t		a;
	unisgned char	*i;

	i = (unsigned char *)b;
	while (i < len)
	{
		i[a] = c;
		a++ ;
	}
	return (b = i);
}
