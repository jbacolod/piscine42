/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:18:19 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/11 17:31:31 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb * 1;
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	return (result * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	result;

	if (argc == 3)
		result = ft_recursive_power(atoi(argv[1]), atoi(argv[2]));
	printf("%d\n", result);
	return (0);
}*/
