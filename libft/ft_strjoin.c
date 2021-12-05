#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;

	if (!s1 || !s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(sizeof(*s1) * size);
	if (!str)
		return (0);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, size);
	return (str);
}
/*
 #include <stdio.h>
 int main()
 {
 	char *s = ft_strjoin("tripouille", "42");
 	printf("%s\n", s);
}*/
