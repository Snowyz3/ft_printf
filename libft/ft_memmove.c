#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if (dest > src)
	{
		n--;
		while (i <= n)
		{
			*((unsigned char *)(dest + (n - i)))
				= *((unsigned char *)(src + (n - i)));
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			*((unsigned char *)(dest + i)) = *((unsigned char *)(src + i));
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
  
int main()
{
	char str1[15] = "testr";
	char str2[15] = "testr";
	char str3[15] = "aaaaaaaaa";

	ft_memmove (str1, str3, sizeof(str3));
	memmove (str2, str3, sizeof(str3));
	printf("Original: %s\n", str2);
	printf("Mine    : %s\n", str1);
	return (0);
}*/