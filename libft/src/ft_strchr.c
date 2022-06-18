#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (s != NULL)
		while (s[i] != '\0')
		{
			if (s[i] == c)
				return (s + i);
			i++;
		}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
