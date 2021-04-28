#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	void   *xb = b;
	long   lc = c;
	size_t count;

	if (!len)
		return xb;
	lc &= 0xff;
	lc |= lc << 8;
	lc |= lc << 16;
	lc |= lc << 32;
	count = len >> 3;
	if (count)
	{
		long *lb = b;
		for (; count; count--)
			*lb++ = lc;
		b = lb;
	}
	if (len & 4)
	{
		int *ib = b;
		*ib++ = lc;
		b = ib;
	}
	if (len & 2)
	{
		short *sb = b;
		*sb++ = lc;
		b = sb;
	}
	if (len & 1)
	{
		char *cb = b;
		*cb = lc;
	}
	return (xb);
}
