/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:00:54 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/11 17:35:01 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = nb * 1;
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	while (i < power - 1)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int 	result;

	if (argc == 3)
		result = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
	printf("%d\n", result);
	return (0);
}*/
