int ft_isalpha(int c)
{
	return ((unsigned int)((c | 0x20) - 0x61) < 26);
}
/*
int ft_isalpha2(int c)
{
	return ((unsigned int)((c & 0xFFFFFFDF) - (0x42 - 0x1)) < 26);
}*/

