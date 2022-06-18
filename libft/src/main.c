#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
<<<<<<< HEAD
	char *str = "12345678";
	char *str1 = "scddcs12345678";
	char *str2 = "   \t\n 12345678sdcdsc";
	char *str3 = "-3233232";
	printf("%d\t%d\n", ft_atoi(str), atoi(str));
	printf("%d\t%d\n", ft_atoi(str1), atoi(str1));
	printf("%d\t%d\n", ft_atoi(str2), atoi(str2));
	printf("%d\t%d\n", ft_atoi(str3), atoi(str3));

=======
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

	printf("1 = my_strchr: %s\nstrchr: %s\n\n", ft_strchr(str1, 'y'), strchr(str1, 'y'));
	printf("2 = my_strchr: %s\nstrchr: %s\n\n", ft_strchr(str2, 'u'), strchr(str2, 'u'));
	printf("3 = my_strchr: %s\nstrchr: %s\n\n", ft_strchr(str3, '1'), strchr(str3, '1'));
	printf("4 = my_strchr: %s\nstrchr: %s\n\n", ft_strchr(str4, ' '), strchr(str4, ' '));
	printf("5 = my_strchr: %s\nstrchr: %s\n\n", ft_strchr(str5, '1'), strchr(str5, '1'));
	printf("6 = my_strchr: %s\nstrchr: %s\n\n", ft_strchr(str6, '2'), strchr(str6, '2'));
	printf("7 = my_strchr: %s\nstrchr: %s\n\n", ft_strchr(str7, ' '), strchr(str7, ' '));
	printf("8 = my_strchr: %s\nstrchr: %s\n\n", ft_strchr(str8, ','), strchr(str8, ','));
	printf("9 = my_strchr: %s\nstrchr: %s\n\n", ft_strchr(str9, 'd'), strchr(str9, 'd'));
	printf("10 = my_strchr: %s\nstrchr: %s\n\n", ft_strchr(str10, '\n'), strchr(str10, '\n'));
	printf("11 = my_strchr: %s\nstrchr: %s\n\n", ft_strchr(str11, '\0'), strchr(str11, '\0'));

>>>>>>> 052b86dfc3d9f0226a63a80d0148087c3ea6d0de
	return 0;
}
