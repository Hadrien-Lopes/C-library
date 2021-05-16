int ft_tolower(int c)
{
	if ((unsigned int)((c | 0x20) - 0x61) < 26)
		c |= 0x20;
	return (c);
}
