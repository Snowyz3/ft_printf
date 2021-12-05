int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('z'));
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", ft_isdigit('.'));
}*/