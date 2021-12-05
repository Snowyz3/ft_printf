#include "../includes/libft.h"

static size_t	ft_getlen(int n)
{
	size_t	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	else if (n == 0)
		return (1);
	else if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_setstr(char *str, int n, size_t len)
{
	int	i;

	i = (int)(len - 1);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	str[len] = '\0';
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	len = ft_getlen(n);
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (0);
	if (n == 0)
		ft_strlcpy(str, "0", 2);
	else if (n == -2147483648)
		ft_strlcpy(str, "-2147483648", 12);
	else
		ft_setstr(str, n, len);
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char *s = ft_itoa(-2147483648);
	printf("%s\n", s);
}*/