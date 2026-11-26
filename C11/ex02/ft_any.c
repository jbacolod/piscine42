/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 12:36:28 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/19 14:11:34 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char *))
{
	int	i;
	
	if (!(tab))
		return (0);
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	ft_search(char *str)
{
	int	i;
	char	*search;

	i = 0;
	search = "ciao";
	while (str[i] && search[i] && str[i] == search[i])
		i++;
	if (str[i] == search[i] && str[i] == 0 && search[i] == 0)
		return (1);
	return (0);
}

int	ft_letter(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	result;
	
	if (ac > 1)
	{
		result = ft_any(av + 1, &ft_search);
		result = ft_any(&av[1], &ft_letter);
		printf("%d", result);
	}
	printf("\n");
	return (0);
}*/