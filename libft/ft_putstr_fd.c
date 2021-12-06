#include "../includes/libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!fd)
		return (0);
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return (i);
}
/*
int main()
{
	ft_putstr_fd("testr\n", 1);
}*/
