#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *x;
	size_t len = ft_strlen(s1) + 1;	
	
	if ((x = (char*)ft_memalloc(len)))
		ft_memcpy((void*)x, (void*)s1, len);
	return (x);
}
