/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:14:58 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/19 14:37:56 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < length)
	{
		result += f(tab[i]);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int	ft_word(char *str)
{
	int	i;
	char	*word;
	
	word = "prova";
	i = 0;
	while (str[i] && word[i] && str[i] == word[i])
		i++;
	if (str[i] == word[i] && str[i] == 0 && word[i] == 0)
		return (1);
	return (0);
}

int	ft_alphanumeric(char *str)
{
	int	i;
	char	letter;

	i = 0;
	letter = 'j';
	while (str[i])
	{
		if (str[i] == letter)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	result;
	int	result1;
	
	if (ac > 1)
	{
		result = ft_count_if(av + 1, ac - 1, &ft_word);
		result1 = ft_count_if(av + 1, ac - 1, &ft_alphanumeric);
		printf("%d", result);
		printf("\n");
		printf("%d", result1);
	}
	printf("\n");
	return (0);
}*/