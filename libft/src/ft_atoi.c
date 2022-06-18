#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int znak;
	int res;

	i = res = 0;
	znak = 1;
	if (!str || str[i] == '\0')
		return 0;
	while ((str[i] >= 7 && str[i] < 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		znak = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		res = res * 10 + (str[i++] - 48);
	return (res * znak);
}
