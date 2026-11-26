/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 13:20:11 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:49:30 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	write(1, "\n", 1);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
	write(1, "a is now: ", 10);
	ft_putnbr(*a);
	write(1, "b is now: ", 10);
	ft_putnbr(*b);
}

/*int	main(void)
{
	int		a;
	int		b;
	int		*ptr_a;
	int		*ptr_b;

	a = 32;
	b = 51;
	write(1, "a is: ", 6);
	ft_putnbr(a);
	write(1, "b is: ", 6);
	ft_putnbr(b);
	write(1, "\n", 1);

	ptr_a = &a;
	ptr_b = &b;
	ft_swap(ptr_a, ptr_b);

	return (0);
}*/
