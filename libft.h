#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, char*src);

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isacii(int c);

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);

#endif
