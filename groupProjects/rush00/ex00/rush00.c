/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 11:10:26 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/11 12:39:42 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	if (x > 0 && y > 0)
	{
		while (row < y)
		{
			col = 0;
			while (col < x)
			{
				ft_putchar_bonus(row, col, x, y);
				col++;
			}
			write(1, "\n", 1);
			row++;
		}
	}
	else
		write(1, "Error\n", 6);
}
