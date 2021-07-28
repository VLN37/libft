#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

void			*ft_memset(void *str, int c, size_t len);
void			*ft_calloc(size_t nbr, size_t size);
size_t			ft_strlen(const char *str);
void			*ft_memchr (const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			ft_bzero(void *str, size_t len);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
char			*ft_strdup(const char *src);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*ft_strchr(const char *str, int c);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strrchr(const char *str, int c);
char			*ft_strnstr(const char *str, const char *to_find, size_t n);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char *			ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int nbr);

#endif
