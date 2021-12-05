#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	str = malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s, len + 1);
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[500] = "Hello World!";
	char *str1 = ft_strdup(str);
	char *str2 = strdup(str);

	printf("%s\n", str);
	printf("%p\n\n", str);
	printf("My Code:\n");
	printf("%s\n", str1);
	printf("%p\n\n", str1);
	printf("Original:\n");
	printf("%s\n", str2);
	printf("%p\n", str2);
}*/