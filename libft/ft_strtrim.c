#include "../includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	size;

	if (!s1)
		return (0);
	i = 0;
	while (s1[i] && (ft_strchr(set, s1[i]) != 0))
		i++;
	size = ft_strlen((char *)s1);
	while (s1[i] && ft_strchr(set, s1[size - 1]))
		size--;
	return (ft_substr(s1, i, size - i));
}
/*
#include <stdio.h>
int main()
{
	char s1[500] = "atestrcb";
	char set[500] = "abc";

	printf("%s\n", ft_strtrim(s1, set));
}*/
