#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "12345678";
	char c = 't';
	int a = 123;
	size_t result;

	char *string = NULL;
	string = ft_calloc(10, sizeof(char));
	if (string)
	{
		strcpy(string, "Hello");
		printf("Строка : %s\n", string);
		free(string);
	}
	else
		printf("Недостаточно памяти\n");
	return 0;
}
