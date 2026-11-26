/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 20:42:02 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/20 11:03:21 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	value;

	i = 0;
	sign = 1;
	value = 0;
	while ((unsigned char)str[i] <= 32 || (unsigned char)str[i] == 126)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((unsigned char)str[i] >= '0' && (unsigned char)str[i] <= '9')
	{
		value = (value * 10) + str[i] - '0';
		i++;
	}
	return (value * sign);
}

void	ft_putnbr_aus(int nbr)
{
	char	c;

	if (nbr >= 10)
		ft_putnbr_aus(nbr / 10);
	c = (nbr % 10) + '0';
	ft_putchar(c);
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
		ft_putchar('\n');
	}
}
