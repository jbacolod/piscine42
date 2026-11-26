/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 19:01:16 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:53:46 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_aus(int nbr);
void	ft_putnbr(int nbr);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int	i;
	int	tab[] = {3, 52, 1, 43, 23};
	int	size;

	size = sizeof(tab) / sizeof(tab[0]);
	i = 0;
	printf("Before sorting of the array.\n");
	while (i < size)
	{
		ft_putnbr(tab[i]);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	ft_sort_int_tab(tab, size);
	i = 0;
	printf("After sorting of the array.\n");
	while (i < size)
	{
		ft_putnbr(tab[i]);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr_aus(int nbr)
{
	char	c;

	if (nbr >= 10)
		ft_putnbr_aus(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		ft_putnbr_aus(nbr);
	}
}*/
