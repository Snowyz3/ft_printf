#include "../includes/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
	ft_putchar_fd('t', 1);
	ft_putchar_fd('e', 1);
	ft_putchar_fd('s', 1);
	ft_putchar_fd('t', 1);
	ft_putchar_fd('r', 1);
	ft_putchar_fd('\n', 1);
}*/