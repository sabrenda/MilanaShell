#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "12345678";
	char c = 't';
	int a = 123;
	size_t result;

	if (ft_isascii(c))
		printf("%c - is ascii\n", c);
	else
		printf("%c - isn't ascii\n", c);


	return 0;
}
