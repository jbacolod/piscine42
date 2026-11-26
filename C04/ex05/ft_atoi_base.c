/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:28:20 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/11 16:17:32 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || base[i] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (!((unsigned char)base[i] >= 33 && (unsigned char)base[i] <= 126))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_check_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi(char *str, char *base, int check_base)
{
	int		i;
	int		sign;
	int		digit;
	long	value;

	i = 0;
	sign = 1;
	value = 0;
	while ((unsigned char)str[i] <= 32 || (unsigned char)str[i] == 127)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	digit = ft_check_index(str[i], base);
	while (digit != -1)
	{
		value = (value * check_base) + digit;
		i++;
		digit = ft_check_index(str[i], base);
	}
	return ((int)(value * sign));
}

int	ft_atoi_base(char *str, char *base)
{
	int	check_base;

	check_base = ft_check_base(base);
	if (check_base == 0)
		return (0);
	return (ft_atoi(str, base, check_base));
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	result;

	if (argc == 3)
		result = ft_atoi_base(argv[1], argv[2]);
	printf("%d\n", result);
	return (0);
}*/
