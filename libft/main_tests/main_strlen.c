#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "12345678";
	char c = 't';
	int a = 123;
	size_t result;

	result = ft_strlen(str);
	printf("Длина строки: [%s] равна [%ld]\n", str, result);

	return 0;
}
