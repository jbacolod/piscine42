/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:52:57 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/11 16:58:59 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	result;

	if (argc == 2)
		result = ft_recursive_factorial(atoi(argv[1]));
	printf("%d\n", result);
	return (0);
}*/
