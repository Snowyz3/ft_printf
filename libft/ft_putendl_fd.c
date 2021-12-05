#include "../includes/libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (!s || !fd)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
/*
int main()
{
	ft_putendl_fd("testr", 1);
}*/
