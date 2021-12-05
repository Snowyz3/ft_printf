#include "../includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	final;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	final = i;
	if (size < final)
		final = size;
	while (src[j] && i < (size - 1) && size != 0)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (final + i);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int main(void)
{
	char a[500] = "hello world this is me";
	char b[500] = "abcdefgh";
	char c[500] = "abcdefgh";

	printf("Mine    : %ld\n", ft_strlcat(b, a, 31));
	printf("Mine    : %s\n", b);
	printf("Original: %ld\n", strlcat(c, a, 31));
	printf("Original: %s\n", c);
}*/