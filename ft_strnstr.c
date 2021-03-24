//#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
/*{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;

	while (haystack[i] && needle[i] && i < len)
	{
		
	}
	return (NULL);
}
*/
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
			printf("%d\n",haystack[i + j]);
		}
		i++;
	}
	return (NULL);
}

int main () 
{
	const char haystack[20] = "TutorialsPoint";
	const char needle[10] = "Point";
	char *ret;

	ret = ft_strnstr(haystack, needle, 20);

	printf("The substring is: %s\n", ret);
				      
	return(0);
}
