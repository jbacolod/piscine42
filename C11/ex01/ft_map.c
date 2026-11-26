/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 11:20:21 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/19 12:33:59 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int		i;
	int		*map;

	map = malloc(length * sizeof(int));
	if (!(map))
		return (0);
	i = 0;
	while (i < length)
	{
		map[i] = f(tab[i]);
		i++;
	}
	return (map);
}
// #include <stdio.h>

// int	ft_square(int nb)
// {
// 	return (nb * nb);
// }

// int	ft_negative(int nb)
// {
// 	return (-nb);
// }

// int	main(int ac, char **av)
// {
// 	int		i;
// 	int		length;
// 	int	*tab;
// 	int	*map;

// 	if (ac == 2)
// 	{
// 		length = atoi(av[1]);
// 		if (length <= 0)
// 			return (0);
// 		tab = malloc(length * sizeof(int));
// 		if (!(tab))
// 			return (0);
// 		i = 0;
// 		while (i < length)
// 		{
// 			tab[i] = i;
// 			i++;
// 		}
// 		map = ft_map(tab, length, &ft_square);
// 		// map = ft_map(tab, length, &ft_negative);
// 		if (!(map))
// 		{
// 			free(tab);
// 			return (0);
// 		}
// 		i = 0;
// 		while (i < length)
// 		{
// 			printf("%d", map[i]);
// 			if (i == length - 1)
// 				printf("\n");
// 			printf(" ");
// 			i++;
// 		}
// 		free(tab);
// 		free(map);
// 	}
// 	return (0);
// }