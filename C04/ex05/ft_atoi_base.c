/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 22:17:06 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/20 17:57:19 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || (unsigned char)base[i] <= 32
			|| base[i] == 127)
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
	if (count < 2)
		return (0);
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
	while (str[*i] == ' ' || (str[*i] >= '\t' && str[*i] <= '\r'))
		(*i)++;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign = sign * (-1);
		(*i)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	value;
	int	sign;
	int	len_base;
	int	digit;
	int	i;

	len_base = check_base(base);
	if (len_base < 2)
		return (0);
	i = 0;
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
