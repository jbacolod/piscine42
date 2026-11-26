/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 12:24:20 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/25 14:35:52 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	ft_print_array(char ***array)
{
	int	i;
	int	j;

	write(1, "PRINT ARRAY:\n", 13);
	i = -1;
	while (array[++i])
	{
		j = -1;
		while (array[i][++j])
			write(1, &array[i][j], 1);
	}
}

char	***dict_to_array(char *str)
{
	int		i;
	int		lr;
	char	**dict_rows;
	char	**tmp;
	char	***array;

	lr = 0;
	i = -1;
	while (str[++i])
		if (str[i] == '\n')
			lr++;
	i = -1;
	while (++i < lr)
		dict_rows = (char **)malloc(sizeof(char *) * lr);
	dict_rows = ft_split(str, "\n");
	array = (char ***)malloc(sizeof(char **) * lr);
	i = -1;
	while (dict_rows[++i])
	{
		array[i] = (char **)malloc(sizeof(char *) * 2);
		tmp = ft_split(dict_rows[i], ": ");
		array[i][1] = (char *)malloc(sizeof(char) * ft_strlen(tmp[1]));
		array[i][0] = tmp[0];
		array[i][1] = tmp[1];
	}
	array[lr] = 0;
	return (array);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}
