#include "libft.h"

char *ft_strnew(size_t size)
{
	char *s;

	if ((s = (char*)malloc(size + 1)))
		ft_bzero((void*)s, size + 1);
	return (s);
}
