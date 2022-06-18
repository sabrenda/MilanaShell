#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "12345678";
	char c = 't';
	int a = 123;
	size_t result;

	if (ft_isprint(c))
		printf("%c - печатаемый символ\n", c);
	else
		printf("%c - не является песатаемым символом\n", c);

	return 0;
}
