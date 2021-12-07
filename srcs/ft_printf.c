#include "../includes/ft_printf.h"

char	g_lowerhex[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
'8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
char	g_upperhex[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
'8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int		g_len;

static int	ft_putnbr(long long nbr)
{
	int	temp;

	temp = nbr;
	g_len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar_fd('-', 1);
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar_fd((nbr % 10) + 48, 1);
	}
	else
		ft_putchar_fd((nbr % 10) + 48, 1);
	g_len++;
	if (temp < 0)
		return (g_len + 1);
	return (g_len);
}

static int	putnbr_base(unsigned long long nbr, char ch, unsigned int base)
{
	g_len = 0;
	if (nbr >= (unsigned long long)base)
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

static int	putptr(unsigned long long nbr)
{
	if (nbr == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	return (putnbr_base(nbr, 'p', 16) + 2);
}

static int	convert(const char ch, va_list arg)
{
	if (ch == 'c')
		ft_putchar_fd(va_arg(arg, int), 1);
	else if (ch == 's')
		return (ft_putstr_fd(va_arg(arg, char *), 1));
	else if (ch == 'p')
		return (putptr(va_arg(arg, unsigned long)));
	else if (ch == 'd' || ch == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (ch == 'u')
		return (putnbr_base(va_arg(arg, unsigned int), ch, 10));
	else if (ch == 'x' || ch == 'X')
		return (putnbr_base(va_arg(arg, unsigned int), ch, 16));
	else if (ch == '%')
		ft_putchar_fd('%', 1);
	return (1);
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
			len += convert(format[++i], arg);
		else
			len += write(1, (format + i), 1);
		i++;
	}
	va_end(arg);
	return (len);
}

/* #include <stdio.h>
#include <limits.h>

int	main()
{
	printf("%d\n", ft_printf(" %u ", LONG_MIN));
	printf("%d\n", printf(" %u ", LONG_MIN));

	return (0);
} */