#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "12345678";
	char c = 't';
	int a = 123;
	size_t result;

	if (ft_isalpha(c))
		printf("%c - alphabetic\n", c);
	else
		printf("%c - isn't alphabetic\n", c);

	return 0;
}
