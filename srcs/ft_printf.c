#include <unistd.h>
#include <stdarg.h>
#include "../includes/libft.h"

char	g_lowerhex[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
'8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
char	g_upperhex[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
'8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int		g_len;

static int	putnbr_base(unsigned long nbr, char ch, int base)
{
	if (nbr > base)
	{
		putnbr_base(nbr / base, ch, base);
		if (ch == 'X')
			write(1, &g_upperhex[(nbr % base)], 1);
		else
			write(1, &g_lowerhex[(nbr % base)], 1);
	}
	else
	{
		if (ch == 'X')
			write(1, &g_upperhex[(nbr % base)], 1);
		else
			write(1, &g_lowerhex[(nbr % base)], 1);
	}
	g_len++;
	return (g_len);
}

static int	special(const char ch, va_list arg)
{
	int		len;
	char	*str;

	len = 1;
	if (ch == 'c')
		ft_putchar_fd(va_arg(arg, int), 1);
	else if (ch == 's')
	{
		str = va_arg(arg, char *);
		len = ft_strlen(str);
		ft_putstr_fd(str, 1);
	}
	else if (ch == 'd' || ch == 'i')
		len = putnbr_base(va_arg(arg, int), ch, 10);
	else if (ch == 'u')
		len = putnbr_base(va_arg(arg, unsigned long), ch, 10);
	else if (ch == 'p' || ch == 'x' || ch == 'X')
	{
		if (ch == 'p')
			write(1, "0x", 2);
		len = putnbr_base(va_arg(arg, unsigned long), ch, 16);
	}
	else if (ch == '%')
		ft_putchar_fd('%', 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	arg;

	va_start(arg, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			len += special(format[++i], arg);
		else
			len += write(1, (format + i), 1);
		i++;
	}
	va_end(arg);
	return (len);
}
/* 
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	aa[50] = "weeee";
	char	bb[50] = "aaaaa";
	char	cc = 'c';
	char	*ptr;
	char	*ptr2;
	char	*ptr3;
	int		testr = 123;
	int		testr2 = 456;

	ft_printf("\n%d\n", testr);
	ft_printf("\n%x\n", testr);
	ft_printf("\n%X\n", testr);
	ft_printf("\n%p\n", &ptr);
	printf("\n%d\n", testr);
	printf("\n%x\n", testr);
	printf("\n%X\n", testr);
	printf("\n%p\n", &ptr);
	return (0);
} */