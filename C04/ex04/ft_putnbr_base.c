/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:12:55 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:55:45 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_aus(int nb, char *base, int check_base)
{
	if (nb >= check_base)
		ft_putnbr_aus(nb / check_base, base, check_base);
	write(1, &base[nb % check_base], 1);
}

void	ft_putnbr(int nbr, char *base, int check_base)
{
	long long	nb;

	nb = nbr;
	if (nb < 0)
	{
		write(1, "1", 1);
		nb = -nb;
	}
	else
		write(1, "0", 1);
	ft_putnbr_aus(nb, base, check_base);
	write(1, "\n", 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || base[i] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (!((unsigned char)base[i] >= 33 && (unsigned char)base[i] <= 126))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	check_base;

	check_base = ft_check_base(base);
	ft_putnbr(nbr, base, check_base);
}
/*
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
	if (str[i] == '-' || str[i] == '+')
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


int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr_base(ft_atoi(argv[1]), argv[2]);
	return (0);
}*/
