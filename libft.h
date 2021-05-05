#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h> //write

typedef struct	s_list
{
	void		*content;
	size_t		content_size;
	struct	s_list	*next;
}		t_list;

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
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_putchar(char c);

//BONUS PART
t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem));

#endif
