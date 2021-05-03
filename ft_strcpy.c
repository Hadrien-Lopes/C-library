#include "libft.h"

char *strcpy(char *dst, const char *src)
{
	size_t len = ft_strlen(src) + 1;
	
	dst = ft_memcpy(dst, src, len);
	return (dst);
}
