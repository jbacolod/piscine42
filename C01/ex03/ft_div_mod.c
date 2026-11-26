/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 13:36:26 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:49:55 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_aus(int nbr)
{
	char	c;

	if (nbr >= 10)
		ft_putnbr_aus(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		ft_putnbr_aus(nbr);
	}
	write(1, "\n", 1);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	write(1, "a divided by b is: ", 19);
	ft_putnbr(*div);
	write(1, "b module a is: ", 16);
	ft_putnbr(*mod);
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 45;
	b = 9;
	write(1, "a is: ", 6);
	ft_putnbr(a);
	write(1, "b is: ", 6);
	ft_putnbr(b);
	ft_div_mod(a, b, &div, &mod);
	return (0);
}*/
