#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	void		*xdst = dst;
	void		*vdst = dst;
	const void	*vsrc = src;
	size_t		count;

	count = len >> 3;
	if (!len || (!dst && !src))
		return (xdst);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else	
	{
		if (count)
		{
			long *ldst = (long*)(dst + len - sizeof(long));
			long *lsrc = (long*)(src + len - sizeof(long));
			for (; count; count--)
			{
				*ldst = *lsrc;	
				dst = --ldst;
				src = --lsrc;
			}
		}
		if (len & 4)
		{
			int *idst = (int*)(vdst 
				+ (sizeof(char) * (len & 1)) 
				+ (sizeof(short) * (len & 2)));
			int *isrc = (int*)(vsrc 
				+ (sizeof(char) * (len & 1)) 
				+ (sizeof(short) * (len & 2)));
			*idst = *isrc;
		}
		if (len & 2)
		{
			short *sdst = (short*)(vdst + (sizeof(char) * (len & 1)));
			short *ssrc = (short*)(vsrc + (sizeof(char) * (len & 1)));
			*sdst = *ssrc;
		}
		if (len & 1)
		{
			char *cdst = (char*)(vdst);
			char *csrc = (char*)(vsrc);
			*cdst = *csrc;
		}
	}
	return (xdst);
}
