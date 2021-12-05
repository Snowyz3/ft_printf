#include "../includes/libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	count;

	if (!src)
		return (0);
	if (!size)
		return (ft_strlen(src));
	i = 0;
	count = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[count])
		count++;
	return (count);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int main(void)
{
	char a[500] = "hello world this is me";
	char b[500] = "abcdefgh";
	char c[500] = "abcdefgh";

	printf("Mine    : %ld\n", ft_strlcpy(b, a, 10));
	printf("Mine    : %s\n", b);
	printf("Original: %ld\n", strlcpy(c, a, 10));
	printf("Original: %s\n", b);
}*/
