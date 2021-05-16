int ft_isalnum(int c)
{
	return ((unsigned int)((c | 0x20) - 0x61) < 26 || ((unsigned int)(c ^ 0x30)) < 10);
}
