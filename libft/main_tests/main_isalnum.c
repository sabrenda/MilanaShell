#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "12345678";
	char c = 't';
	int a = 123;
	size_t result;


	if (ft_isalnum(c))
		printf("%c - alphanumeric\n", c);
	else
		printf("%c - isn't alphanumeric\n", c);

	return 0;
}
