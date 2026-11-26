/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 14:55:08 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:49:59 by jbacolod         ###   ########.fr       */
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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a /= *b;
	*b = temp % *b;
	write(1, "On a there is, a divided by b: ", 32);
	ft_putnbr(*a);
	write(1, "On b there is, a module b: ", 28);
	ft_putnbr(*b);
}

/*int	main(void)
{
	int		a;
	int		b;

	a = 24;
	b = 4;
	write(1, "a is: ", 6);
	ft_putnbr(a);
	write(1, "b is: ", 6);
	ft_putnbr(b);
	ft_ultimate_div_mod(&a, &b);
	return (0);
}*/
