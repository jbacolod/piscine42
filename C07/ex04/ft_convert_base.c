/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:28:35 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:57:16 by jbacolod         ###   ########.fr       */
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
		if (base[i] == '+' || base[i] == '-')
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

int	ft_check_index(char c, char *base_from)
{
	int	i;

	i = 0;
	while (base_from[i])
	{
		if (c == base_from[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi(char *nbr, char *base_from, int check_base)
{
	int	i;
	int	sign;
	int	digit;
	int	value;

	i = 0;
	sign = 1;
	value = 0;
	while ((unsigned char)nbr[i] <= 32 || (unsigned char)nbr[i] == 127)
		i++;
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	digit = ft_check_index(nbr[i], base_from);
	while (digit != -1)
	{
		value = (value * check_base) + digit;
		i++;
		digit = ft_check_index(nbr[i], base_from);
	}
	return ((int)value * sign);
}

int	ft_atoi_base(char *nbr, char *base_from)
{
	int	check_base_from;

	check_base_from = ft_check_base(base_from);
	if (check_base_from == 0)
		return (0);
	return (ft_atoi(nbr, base_from, check_base_from));
}

int	ft_nbr_len(int nb, int check_to)
{
	int		i;
	long	n;

	i = 1;
	n = nb;
	if (n == 0)
		return (i);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	if (n > 0)
	{
		while (n / check_to)
		{
			n /= check_to;
			i++;
		}
	}
	return (i);
}
