#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t count;

	if (!n)
		return ;
	count = n >> 3;
	if (count)
	{
		long *ls = s;
		for (; count; count--)
			*ls++ = 0;
		s = ls;
	}
	if (n & 4)
	{
		int *is = (int*)s;
		*is ^= *is;
		s = ++is;
	}
	if (n & 2)
	{
		short *ss = (short*)s;
		*ss ^= *ss;
		s = ++ss;
	}
	if (n & 1)
	{
		char *cs = (char*)s;
		*cs ^= *cs;
	}
}
