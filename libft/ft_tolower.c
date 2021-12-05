int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <stdio.h>
int	main()
{
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('1'));
	printf("%c\n", ft_tolower('.'));
}*/