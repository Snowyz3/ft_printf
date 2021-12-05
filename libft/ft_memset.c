#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)(s + i)) = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[50] = "aaaaaaaa testr test";
	char str2[50] = "aaaaaaaa testr test";
	//char str[50] = "";
	//char str2[50] = "";
	ft_memset(str, '.', 8);
	memset(str2, '.', 8);
	printf("Mine:  %s\n", str);
	printf("Original:  %s\n", str2);
}*/