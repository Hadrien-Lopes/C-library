#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t count;
	void *xs1 = NULL;
	void *xs2 = NULL;

	if (!n)
		return (0);
	count = n >> 3;
	if (count)
	{
		long *ls1 = (long*)s1;
		long *ls2 = (long*)s2;
		for (; count; count--)
		{
			if (*ls1 != *ls2)
			{
				xs1 = (void*)ls1;
				xs2 = (void*)ls2;
				break ;
			}
			ls1++;
			ls2++;
		}
	}
	if ((xs1 == NULL) && (n & 4))
	{
		int *is1 = (int*)s1;
		int *is2 = (int*)s2;
		
		if (is1 != is2)
		{
			xs1 = (void*)is1;
			xs2 = (void*)is2;
		}
	}
	if ((xs1 == NULL) && (n & 2))
	{
		short *ss1 = (short*)s1;
		short *ss2 = (short*)s2;

		if (ss1 != ss2)
		{
			xs1 = (void*)ss1;
			xs2 = (void*)ss2;
		}

	}
	if ((xs1 == NULL) && (n & 1))
	{
		char *cs1 = (char*)s1;
		char *cs2 = (char*)s2;
		
		if (cs1 != cs2)
		{
			xs1 = (void*)cs1;
			xs2 = (void*)cs2;
		}
	}

	if (xs1 != NULL)
	{
		int *dis1 = (int*)xs1;
		int *dis2 = (int*)xs2;
		if (*dis1 != *dis2)
		{
			xs1 = (void*)dis1;
			xs2 = (void*)dis2;
		}
		else
		{
			xs1 = (void*)++dis1;
			xs2 = (void*)++dis2;
		}

		short *dss1 = (short*)xs1;
		short *dss2 = (short*)xs2;
		if (*dss1 != *dss2)
		{
			xs1 = (void*)dss1;
			xs2 = (void*)dss2;
		}
		else
		{
			xs1 = (void*)++dss1;
			xs2 = (void*)++dss2;
		}

		char *dcs1 = (char*)xs1;
		char *dcs2 = (char*)xs2;
		if (*dcs1 != *dcs2)
			return ((int)*dcs1 - (int)*dcs2);
		else
			return (((int)*(++dcs1)) - ((int)*(++dcs2)));
	}
	return (0);
}
