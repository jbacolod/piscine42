/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 08:51:26 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/22 19:02:00 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_base(char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_nbr_len(long nbr, int len_base_to);
void	ft_fill_nbr(long nbr, char *base_to, char *result, int *i);

int	ft_nbr_len(long nbr, int len_base_to)
{
	int	count;

	count = 0;
	if (nbr <= 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr = nbr / len_base_to;
		count++;
	}
	return (count);
}

void	ft_fill_nbr(long nbr, char *base_to, char *result, int *i)
{
	long	len;

	len = 0;
	while (base_to[len])
		len++;
	if (nbr < 0)
	{
		result[(*i)++] = '-';
		nbr = -nbr;
	}
	if (nbr >= len)
	{
		ft_fill_nbr(nbr / len, base_to, result, i);
	}
	result[(*i)++] = base_to[nbr % len];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nbr_atoi_base;
	int		len_base_to;
	int		nbr_len;
	char	*converted_str;
	int		i;

	len_base_to = ft_check_base(base_to);
	if (ft_check_base(base_from) < 2 || len_base_to < 2)
		return (NULL);
	nbr_atoi_base = (long)ft_atoi_base(nbr, base_from);
	nbr_len = ft_nbr_len(nbr_atoi_base, len_base_to);
	converted_str = malloc(sizeof(char) * (nbr_len + 1));
	if (!converted_str)
		return (NULL);
	i = 0;
	ft_fill_nbr(nbr_atoi_base, base_to, converted_str, &i);
	converted_str[i] = '\0';
	return (converted_str);
}
