/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:45:10 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/10 20:54:37 by jbacolod         ###   ########.fr       */
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
		write(1, "-2147483648", 1);
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
/*
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putnbr(atoi(argv[1]));
	return (0);
}*/
