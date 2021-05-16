#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	void *xdst = dst;
	size_t count = 0;

	if (!n || (!dst && !src))
		return (xdst);
	count = n >> 3;
	if (count)
	{
		long *ldst = (long*)dst;
		long *lsrc = (long*)src;	
		for (; count; count--)
		{
			*ldst = *lsrc;
			dst = ++ldst;
			src = ++lsrc;
		}
	}
	if (n & 4)
	{
		int *idst = (int*)dst;
		int *isrc = (int*)src;
		*idst++ = *isrc++;
		dst = idst;
		src = isrc;
	}
	if (n & 2)
	{
		short *sdst = (short*)dst;
		short *ssrc = (short*)src;
		*sdst++ = *ssrc++;
		dst = sdst;
		src = ssrc;
	}
	if (n & 1)
	{
		char *cdst = (char*)dst;
		char *csrc = (char*)src;
		*cdst = *csrc;
	}
	return (xdst);
}
