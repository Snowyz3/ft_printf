#include "../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *a = "aaaaaaaaaaaaaaaa";
	char *b = "aaaaaa";

	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
	printf("%d\n", strncmp("test\200", "test\0", 6));
}*/