#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *vp;

	if ((vp = malloc(size)))
		ft_bzero(vp, size);
	return (vp);
}
