/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 20:28:24 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/19 20:39:23 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
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

void	ft_putnbr_base(int nbr, char *base)
{
	long long	n;
	int			count;

	count = check_base(base);
	if (count == 0)
		return ;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= count)
		ft_putnbr_base(n / count, base);
	ft_putchar(base[n % count]);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_putnbr_base(atoi(argv[1]), argv[2]);
		write(1, "\n", 1);
	}
	else
		printf("AH RIPROVA");
	return (0);
}*/
