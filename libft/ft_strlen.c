#include "../includes/libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "abcde";

	printf("%ld\n", ft_strlen(str));
	printf("%ld\n", strlen(str));
}*/