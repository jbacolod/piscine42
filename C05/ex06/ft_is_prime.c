/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:14:45 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/17 16:54:01 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	result;

	if (argc >= 2)
	{
		result = (ft_is_prime(atoi(argv[1])));
		if (result == 1)
			printf("Il valore %d e' un numero primo.", atoi(argv[1]));
		else
			printf("Il valore %d non e' un numero primo.", atoi(argv[1]));
	}
	else
		printf("AH!! RIPROVA");
}*/
