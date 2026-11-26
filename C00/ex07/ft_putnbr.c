/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:28:18 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:48:38 by jbacolod         ###   ########.fr       */
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

/*int	main(void)
{
	ft_putnbr(42);
	ft_putnbr(-2147483648);
	ft_putnbr(0);
	ft_putnbr(123456);
	return (0);
}*/
