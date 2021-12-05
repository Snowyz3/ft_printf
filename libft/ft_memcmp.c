#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n != 0)
	{
		i = 0;
		while (i < n)
		{
			if (*((unsigned char *)(s1 + i)) != *((unsigned char *)(s2 + i)))
				return (*((unsigned char *)(s1 + i))
				- *((unsigned char *)(s2 + i)));
			i++;
		}
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

	printf("%d\n", ft_memcmp(a, b, 6));
	printf("%d\n", memcmp(a, b, 6));
}*/
