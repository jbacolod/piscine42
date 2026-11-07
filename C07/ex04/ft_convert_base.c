/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 21:07:26 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/20 18:47:37 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || (unsigned char)base[i] <= 32)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		count++;
		i++;
	}
	return (count);
}

int	ft_index_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_skip_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] != '\0' && str[*i] >= 0 && str[*i] <= 32)
		(*i)++;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign *= (-1);
		(*i)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	value;
	int	digit;
	int	len_base;

	i = 0;
	len_base = ft_check_base(base);
	if (len_base < 2)
		return (0);
	sign = ft_skip_sign(str, &i);
	value = 0;
	digit = ft_index_base(str[i], base);
	while (digit != -1)
	{
		value = value * len_base - digit;
		i++;
		digit = ft_index_base(str[i], base);
	}
	if (sign == 1)
		value = value * (-1);
	return (value);
}
