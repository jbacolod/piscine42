/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 10:38:17 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:44:33 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src)
{
	int		i;
	char	*dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!(dest))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock;

	stock = malloc((ac) * sizeof(t_stock_str));
	if (!(stock))
		return (NULL);
	if (ac < 2)
		return (NULL);
	i = 1;
	while (i < ac)
	{
		stock[i - 1].size = ft_strlen(av[i]);
		stock[i - 1].str = av[i];
		stock[i - 1].copy = ft_strcpy(av[i]);
		if (!(stock[i - 1].copy))
		{
			free(stock);
			return (NULL);
		}
		i++;
	}
	stock[ac - 1].str = 0;
	stock[ac - 1].copy = 0;
	stock[ac - 1].size = 0;
	return (stock);
}

int	main(int ac, char **av)
{
	int			i;
	t_stock_str	*stock;

	if (ac < 2)
		return (0);
	i = 1;
	stock = ft_strs_to_tab(ac, av);
	while (i < ac)
	{
		printf("%d\n", stock[i - 1].size);
		printf("%s\n", stock[i - 1].str);
		printf("%s\n", stock[i - 1].copy);
		i++;
	}
	i = 0;
	while (i < ac - 1)
	{
		free(stock[i].copy);
		i++;
	}
	free(stock);
	return (0);
}
