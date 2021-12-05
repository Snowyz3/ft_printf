#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((*(char *)(s + i)) == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[50] = "hello world!";
	char str1[50] = "hello world!";
	char c = ' ';

	printf("%s\n", (char*)ft_memchr(str, c, 6));
	printf("%s\n", (char*)memchr(str1, c, 6));
}*/