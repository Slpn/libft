#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;

	j = 0;
	i = ft_strlen(dest);
	res = ft_strlen(src);
	if (size <= i)
		res = size + res;
	else
		res = i + res;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dest[i] = '\0';
	return (res);
}
