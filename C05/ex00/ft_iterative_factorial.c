/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:20:24 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/11 16:50:36 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nbr)
{
	int	i;
	int	value;

	i = 1;
	value = 1;
	if (nbr < 0)
		return (0);
	while (i <= nbr)
	{
		value = value * i;
		i++;
	}
	return (value);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char ** argv)
{
	int	result;

	if (argc == 2)
		result = ft_iterative_factorial(atoi(argv[1]));
	printf("%d\n", result);
	return (0);
}*/
