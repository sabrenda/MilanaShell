#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "12345678";
	char *str1 = "scddcs12345678";
	char *str2 = "   \t\n 12345678sdcdsc";
	char *str3 = "-3233232";
	printf("%d\t%d\n", ft_atoi(str), atoi(str));
	printf("%d\t%d\n", ft_atoi(str1), atoi(str1));
	printf("%d\t%d\n", ft_atoi(str2), atoi(str2));
	printf("%d\t%d\n", ft_atoi(str3), atoi(str3));

	return 0;
}
