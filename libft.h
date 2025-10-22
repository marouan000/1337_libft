#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stddef.h>   // preferred, defines NULL, size_t, etc.
#include <stdlib.h>

int ft_isalpha(int a);
int ft_isdigit(int d);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *str);
void    *ft_memcpy(void *dst, const void *src, size_t n);
unsigned long   ft_strlcat(char *dst, const char *src, int dstsize);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
void    *ft_memset(void *b, int c, int len);
void    ft_bzero(void *s, int n);
void    *ft_memmove(void *dst, void *src, int len);
void    *ft_memchr(void *s, int c, int n);
int ft_memcmp(void *s1, void *s2, int n);
int ft_toupper(int c);
int ft_tolower(int c);
char    *ft_strchr(char *s, int c);
char    *ft_strrchr(char *s, int c);
int ft_strncmp(const char *s1, const char *s2, int n);
int ft_strlcpy(char *dst, const char *src, int dstsize);
int ft_atoi(const char *str);
void    *ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s1);
char    *ft_substr(char const *s, unsigned int start,size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);

#endif