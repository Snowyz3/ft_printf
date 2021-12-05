#include "../includes/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen((char *)str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[50] = "hello world!";
	char c = ' ';

	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));
}*/