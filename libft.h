#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

/*                    PRIMEIRA PARTE                              */
int             ft_atoi(const char * str);

void            ft_bzero(void *s, unsigned int n);

void            *ft_calloc(unsigned int num, unsigned int size);

int				ft_isalnum(int c);

int				ft_isalpha(int c);

int				ft_isascii(int c);

int				ft_isdigit(int c);

int				ft_isprint(int c);

void			*ft_memchr(const void *ptr, int value, unsigned int num);

int				ft_memcmp(const void *ptr1, const void *ptr2, unsigned int num);

void			*ft_memcpy(void *destination, const void *source, unsigned int num);

void			*ft_memmove(void *destination, const void *source, unsigned int num);

void			*ft_memset(void *ptr, int value, unsigned int num);

char            *ft_strchr(const char *str, int character);

char            *ft_strdup(char *str);

char            *ft_strlcat(char *destination, const char *source, unsigned int num);

char            *ft_strlcpy(char *destination, const char *source, unsigned int num);

unsigned int    ft_strlern(const char *string);

int             ft_strncmp(const char *str1, const char *str2, unsigned int num);

char            *strnstr(const char *big, const char *little, unsigned int len);

char            *strchr(const char *str, int character);

int             ft_tolower(int c);

int             ft_toupper(int c);

/*                    SEGUNDA PARTE                              */
char            *ft_substr(char const *s, unsigned int start, size_t len);

char            *ft_strjoin(char const *s1, char const *s2);

char            *ft_strtrim(char const *s1, char const *set);

char            **ft_split(char const *s, char c);

char            *ft_itoa(int n);

char            *ft_strmapi(char const *s, char (*f)(unsigned int, char));

void            ft_striteri(char *s, void (*f)(unsigned int, char*));

void            ft_putchar_fd(char c, int fd);

void            ft_putstr_fd(char *s, int fd);

void            ft_putendl_fd(char *s, int fd);

void            ft_putnbr_fd(int n, int fd);

#endif