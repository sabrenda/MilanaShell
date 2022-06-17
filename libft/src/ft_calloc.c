#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	char *str;
	int i;

	i = 0;
	str = NULL;
	if (nmemb != 0 || size != 0)
		str = (char *)malloc(nmemb * size);
	if (str != NULL)
	{
		while (i < nmemb)
			str[i++] = '0';
	}
	return (str);
}