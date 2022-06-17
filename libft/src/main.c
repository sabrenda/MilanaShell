#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "12345678";
	char c = 't';
	int a = 123;
	size_t result;

#pragma region isalnum
	if (ft_isalnum(c))
		printf("%c - alphanumeric\n", c);
	else
		printf("%c - isn't alphanumeric\n", c);
#pragma endregion

#pragma region isalpha
	if (ft_isalpha(c))
		printf("%c - alphabetic\n", c);
	else
		printf("%c - isn't alphabetic\n", c);
#pragma endregion

#pragma region isascii
	if (ft_isascii(c))
		printf("%c - is ascii\n", c);
	else
		printf("%c - isn't ascii\n", c);
#pragma endregion

#pragma region 
	if (ft_isdigit(c))
		printf("%c - цифра\n", c);
	else
		printf("%c - не является цифрой\n", c);
#pragma endregion

#pragma region isprint
	if (ft_isprint(c))
		printf("%c - печатаемый символ\n", c);
	else
		printf("%c - не является песатаемым символом\n", c);
#pragma endregion

#pragma region strlen
	result = ft_strlen(str);
	printf("Длина строки: [%s] равна [%ld]\n", str, result);
#pragma endregion

#pragma region toupper
	printf("Заглавная литера [%c]\n", ft_toupper(0x6d));
#pragma endregion

#pragma region tolower
	printf("Прописная литера [%c]\n", ft_tolower(0x4d));
#pragma endregion

	char *string = NULL;
	/* выделить память для строки */
	string = ft_calloc(10, sizeof(char));
	if (string)
	{
		/* скопировать в строку "Hello" */
		strcpy(string, "Hello");
		/* вывести строку */
		printf("Строка : %s\n", string);
		/* освободить память */
		free(string);
	}
	else
	{
		printf("Недостаточно памяти\n");
	}
	return 0;
}
