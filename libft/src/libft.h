#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
int ft_tolower(int c);
int ft_toupper(int c);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_strdup(const char *s);
char *ft_strchr(const char *s, int c);

#endif
