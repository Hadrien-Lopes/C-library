int ft_isdigit(int c)
{
	return (((unsigned int)(c ^ 0x30)) < 10);
}
