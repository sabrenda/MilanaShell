#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "12345678";
	char c = 't';
	int a = 123;
	size_t result;

	if (ft_isdigit(c))
		printf("%c - цифра\n", c);
	else
		printf("%c - не является цифрой\n", c);

	return 0;
}
