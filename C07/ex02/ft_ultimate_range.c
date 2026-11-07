/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 21:47:46 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/18 17:23:17 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*range;
	int	min;
	int	max;
	int	result;
	int	i;

	range = NULL;
	if (argc >= 4)
	{
		printf("Size of the range is:  %p\n", range);
		min = (atoi(argv[2]));
		max = (atoi(argv[3]));
		result = ft_ultimate_range(&range, min, max);
		printf("Now, the size of the range is: %d\n", result);
		printf("In the range we have: \n");
		i = 0;
		while (i < result)
		{
			printf("%d ", range[i]);
			i++;
		}
		printf("\n");
		free(range);
	}
	else
		printf("AH!! RIPROVA\n");
}*/
