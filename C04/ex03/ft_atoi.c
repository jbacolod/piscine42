/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:55:24 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/19 18:33:47 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	value;

	i = 0;
	sign = 1;
	value = 0;
	while ((unsigned char)str[i] <= 32 || (unsigned char)str[i] == 127)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = (value * 10) + str[i] - '0';
		i++;
	}
	return (value * sign);
}
/*
#include <unistd.h>

void	ft_putnbr_aus(int nbr);
void	ft_putnbr(int nbr);

int	main(int argc, char **argv)
{
	int	result;

	if (argc == 2)
	{
		result = ft_atoi(argv[1]);
		ft_putnbr(result);
	}
	return (0);
}

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
		write(1, "\n", 1);
	}
}*/