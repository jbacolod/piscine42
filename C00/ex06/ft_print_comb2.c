/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:27:24 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:48:35 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		x;
	int		y;
	char	c;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			c = (x / 10) + '0';
			write(1, &c, 1);
			c = (x % 10) + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			c = (y / 10) + '0';
			write(1, &c, 1);
			c = (y % 10) + '0';
			write(1, &c, 1);
			if (x != 98 || y != 99)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
	return (0);
}*/
