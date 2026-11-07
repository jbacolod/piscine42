/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:08:43 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/15 21:27:47 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	value;
	int	sign;
	int	i;

	sign = 1;
	value = 0;
	i = 0;
	while (str[i] >= 0 && str[i] <= 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = (value * 10) + (str[i] - '0');
		i++;
	}
	return (value * sign);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	result;

	if (argc >= 2)
	{
		result = ft_atoi(argv[1]);
		printf("%i\n", result);
	}
	else
		printf("AH! RIPROVA!! VAMOS\n");
}*/
