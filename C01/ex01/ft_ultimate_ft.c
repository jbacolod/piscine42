/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 12:59:48 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:49:19 by jbacolod         ###   ########.fr       */
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
		write(1, "-2147483647", 11);
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

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
	ft_putnbr(*********nbr);
}

/*int	main(void)
{
	int	nbr;
	int	*ptr0;
	int	**ptr1;
	int	***ptr2;
	int	****ptr3;
	int	*****ptr4;
	int	******ptr5;
	int	*******ptr6;
	int	********ptr7;
	int	*********ptr8;

	nbr = 35;
	ptr0 = &nbr;
	ptr1 = &ptr0;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ft_putnbr(nbr);
	ft_ultimate_ft(ptr8);
	return (0);
}*/
