/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:40:10 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:56:57 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (!(*range))
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		min;
	int		max;
	int		size;
	int	*range;

	if (argc == 3)
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		size = ft_ultimate_range(&range, min, max);
		printf("%d\n", size);
		free(range);
	}
	return (0);
}*/
