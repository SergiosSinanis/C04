#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int divider;

	divider = 1000000000;

	if(nb == 0)
	{
		ft_putchar('0')'
		return;
	}

	if(nb < 0)
	{
		ft_putchar('-')'
		divider = divider * (-1);
	}

	while(nb / divider == 0 && nb != 0)
	{
		divider = divider / 10;
	}

	while(divider >= 1)
	{
		ft_putchar((nb / divider) + '0');
		nb = nb % divider;
		divider = divider / 10;
	}
}
