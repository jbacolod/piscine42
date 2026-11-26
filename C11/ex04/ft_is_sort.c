/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:39:53 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/19 17:32:10 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	flag;
	
	if (!(tab))
		return (0);
	if (length == 0)
		return (0);
	i = 0;
	while (i < length - 1)
	{
		flag = f(tab[i], tab[i + 1]);
		if (!(flag))
			return (0);
		i++;
	}
	return (flag);
}
/*
#include <stdio.h>

int	ft_greater(int a, int b)
{
	if (a > 0 && b > 0)
		return (1);
	return (0);
}

int	ft_less(int a, int b)
{
	if (a < 0 && b < 0)
		return (1);
	return (0);
}

int	ft_sort(int a, int b)
{
	if (a < b)
		return (1);
	return (0);
}

void	ft_condition(int flag)
{
	if (flag)
		printf("VALID\n");
	else
		printf("INVALID\n");
}

int	main(void)
{
	int		size;
	int		result;
	int		result1;
	int		result2;
	int	tab[] = {2, 3, 396, 41, 31, 64, 0};
	int	tab1[] = {-2, -3, -396, -41, -31, -64, 976};
	int	tab2[] = {2, 3, 23, 41, 51, 64, 6};
	
	size = sizeof(tab) / sizeof(tab[0]);
	result = ft_is_sort(tab, size, &ft_greater);
	result1 = ft_is_sort(tab1, size, &ft_less);
	result2 = ft_is_sort(tab2, size, &ft_sort);
	ft_condition(result);
	ft_condition(result1);
	ft_condition(result2);
	return (0);
}*/