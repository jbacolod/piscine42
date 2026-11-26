/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 12:42:34 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:48:54 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_aus(int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr_aus(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		ft_putnbr_aus(nb);
	}
	write(1, "\n", 1);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
	ft_putnbr(*nbr);
}

/*int	main(void)
{
	int	nbr;
	int	*ptr;

	nbr = 35;
	ptr = &nbr;
	ft_putnbr(nbr);
	ft_ft(ptr);

	return (0);
}*/
