/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 12:16:54 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:48:42 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int n, int *array, int *first)
{
	int		j;
	char	c;

	if (!*(first))
		write(1, ", ", 2);
	*first = 0;
	j = 0;
	while (j < n)
	{
		c = array[j] + '0';
		write(1, &c, 1);
		j++;
	}
}

void	ft_print_combn_aus(int n, int start, int index, int *array, int *first)
{
	int	i;

	i = start;
	if (n == index)
		ft_print(n, array, first);
	else
	{
		while (i <= 9)
		{
			array[index] = i;
			ft_print_combn_aus(n, i + 1, index + 1, array, first);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	array[10];
	int	start;
	int	index;
	int	first;

	start = 0;
	index = 0;
	first = 1;
	if (n > 0 && n < 10)
	{
		ft_print_combn_aus(n, start, index, array, &first);
		write(1, "\n", 1);
	}
	else
		write(1, "INVALID", 7);
}
/*
int	main(void)
{
	ft_print_combn(1);
	ft_print_combn(2);
	ft_print_combn(3);
	ft_print_combn(4);
	ft_print_combn(5);
	return (0);
}*/
