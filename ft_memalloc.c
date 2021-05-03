#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *x;

	if ((x = malloc(size)))
		ft_bzero(x, size);
	return (x);
}
