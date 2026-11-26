/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:26:46 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:57:24 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_base(char *base);
int		ft_check_index(char c, char *base_from);
int		ft_atoi(char *nbr, char *base_from, int check_base);
int		ft_atoi_base(char *nbr, char *base_from);
int		ft_nbr_len(int nb, int check_to);

void	ft_putnbr(long nb, char *base_to, int *i, char *convert_base_to)
{
	int	len;

	len = 0;
	while (base_to[len])
		len++;
	if (nb >= len)
		ft_putnbr(nb / len, base_to, i, convert_base_to);
	convert_base_to[*i] = base_to[nb % len];
	(*i)++;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	int		i;
	int		nbr_len;
	int		check_to;
	char	*convert_base_to;

	if (!ft_check_base(base_from))
		return (NULL);
	check_to = ft_check_base(base_to);
	if (!(check_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	nbr_len = ft_nbr_len(nb, check_to) + 1;
	convert_base_to = malloc(nbr_len * sizeof(char));
	if (!(convert_base_to))
		return (NULL);
	i = 0;
	if (nb < 0)
	{
		convert_base_to[i++] = '-';
		nb = -nb;
	}
	ft_putnbr(nb, base_to, &i, convert_base_to);
	convert_base_to[i] = '\0';
	return (convert_base_to);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*result;

	if (argc == 4)
	{
		result = ft_convert_base(argv[1], argv[2], argv[3]);
		if (result)
		{
			printf("%s", result);
			free(result);
		}
		else
			printf("Errore");
	}
	printf("\n");
	return (0);
}*/
