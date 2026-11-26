/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 20:42:40 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:52:05 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

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
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par && par[i].str != 0)
	{
		ft_putnbr(par[i].size);
		ft_putstr(par[i].str);
		ft_putstr(par[i].copy);
		i++;
	}
}
/*
int	main(int ac, char **av)
{
	int	i;
	t_stock_str	*stock;

	if (ac < 2)
		return (0);
	stock = ft_strs_to_tab(ac, av);
	ft_show_tab(stock);
	i = 0;
	while (i < ac - 1)
	{
		free(stock[i].copy);
		i++;
	}
	free(stock);
	return (0);
}*/
