/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 21:24:31 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:56:55 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	int		max;
	int		min;
	int	*range;

	if (argc == 3)
	{
		max = atoi(argv[2]);
		min = atoi(argv[1]);
		range = ft_range(min, max);
		if (!range)
			return (0);
		i = 0;
		while (i < max - min)
		{
			printf("%d", range[i]);
			if (i != (max - min - 1))
				printf(" ");
			i++;
		}
		printf("\n");
		free(range);
	}
	return (0);
}*/
