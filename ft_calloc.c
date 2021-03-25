#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	len;
	void	memo;

	len = nmemb * size;
	memo = malloc(len);
	if (memo == NULL)
		return (NULL);
	ft_bzero(memo, len);
	return (memo);
}
