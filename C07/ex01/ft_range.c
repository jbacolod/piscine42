/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 21:08:24 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/17 21:52:52 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof(int));
	i = 0;
	while (i < max - min)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*array_numbers;
	int	min;
	int	max;
	int	i;

	if (argc >= 3)
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		array_numbers = ft_range(min, max);
		printf("L'array di valori numerici è composto da: \n");
		i = 0;
		while (i < max - min)
		{
			printf("%d ", array_numbers[i]);
			i++;
		}
		printf("\n");
	}
	else
		printf("AH!! RIPROVA");
}*/
