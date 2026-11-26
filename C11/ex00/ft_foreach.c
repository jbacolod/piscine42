/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 10:16:06 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/19 10:16:14 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <stdlib.h>
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
		write(1, " ", 1);
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
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
	}
	while ((unsigned char)str[i] >= '0' && (unsigned char)str[i] <= '9')
	{
		value = (value * 10) + str[i] - '0';
		i++;
	}
	return (value * sign);
}
int	main(int ac, char **av)
{
	int		i;
	int		length;
	int	*tab;

	if (ac == 2)
	{
		length = ft_atoi(av[1]);
		if (length <= 0)
			return (0);
		tab = malloc(length * sizeof(int));
		if (!(tab))
			return (0);
		i = 0;
		while (i < length)
		{
			tab[i] = i;
			i++;
		}
		ft_foreach(tab, length, &ft_putnbr);
		free(tab);
	return (0);
	}
}*/