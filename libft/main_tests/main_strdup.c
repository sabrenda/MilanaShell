#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char *str1 = "";
	char *str2 = " _";
	char *str3 = "1";
	char *str4 = "\0";
	char *str11 = "1111111111111";
	char *str5 = "1111111111111111111111111111111111111";
	char *str6 = "22222222222222222222222222222222222222222222222222222222222222222";
	char *str7 = "vvfgfgfbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb gbgbhngbgf gggggggggggggggggg \0dfgdgdtd";
	char *str8 = "vvfgfgfbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb gbgbhngbgf gggggggggggggggggg dfnj,fjgnbskfjgnbksfnbksnglbkjnslgbjsnfg\0dfgdgdtd";
	char *str9 = "\0dvfbgvhnj\0ggcvh\n";
	char *str10 = "\t\n\t\n\t\n";
	char c = 't';
	int a = 123;
	size_t result;

	printf("1 = my_strdup: %s\nstrdup: %s\n\n", ft_strdup(str1), strdup(str1));
	printf("2 = my_strdup: %s\nstrdup: %s\n\n", ft_strdup(str2), strdup(str2));
	printf("3 = my_strdup: %s\nstrdup: %s\n\n", ft_strdup(str3), strdup(str3));
	printf("4 = my_strdup: %s\nstrdup: %s\n\n", ft_strdup(str4), strdup(str4));
	printf("5 = my_strdup: %s\nstrdup: %s\n\n", ft_strdup(str5), strdup(str5));
	printf("6 = my_strdup: %s\nstrdup: %s\n\n", ft_strdup(str6), strdup(str6));
	printf("7 = my_strdup: %s\nstrdup: %s\n\n", ft_strdup(str7), strdup(str7));
	printf("8 = my_strdup: %s\nstrdup: %s\n\n", ft_strdup(str8), strdup(str8));
	printf("9 = my_strdup: %s\nstrdup: %s\n\n", ft_strdup(str9), strdup(str9));
	printf("10 = my_strdup: %s\nstrdup: %s\n\n", ft_strdup(str10), strdup(str10));
	printf("11 = my_strdup: %s\nstrdup: %s\n\n", ft_strdup(str11), strdup(str11));
	return 0;
}
