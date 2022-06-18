#include "libft.h"
/* Присоединяет память при помощи вызова malloc,
				копирует  в  нее строку  string  и возвращает
				указатель на присоединенную память.  Функция
				возвращает  NULL,  если память не может быть
				отведена.*/
				
char *ft_strdup(const char *s)
{
	char *new_str;
	int i;

	new_str = NULL;
	i = 0;
	if (s != NULL)
	{
		if (*s == '\0')
		{
			new_str = (char *)malloc(1 * sizeof(char));
			return (new_str = '\0');
		}
		while (s[i] != '\0')
			i++;
		new_str = (char *)malloc((i + 1) * sizeof(char));
		while (s[i] != '\0')
		{
			new_str[i] = s[i];
			i++;
		}
	}
	return (new_str);
}