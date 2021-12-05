#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		*((unsigned char *)(dest + i)) = *((unsigned char *)(src + i));
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[] = "testr";
	char str2[] = "testr";
	char dest1[50];
	char dest2[50];

	ft_memcpy (dest1, str1, sizeof(str1));
	memcpy (dest2, str2, sizeof(str2));
	printf("Original: %s\n", str2);
	printf("Mine    : %s\n", str1);
	return (0);
}*/
