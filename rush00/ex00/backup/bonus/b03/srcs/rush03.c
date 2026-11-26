/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:53:43 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/14 11:59:09 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_header.h"

void	rush(int x, int y)
{
	int	row;
	int	col;

	if ((x <= 0) || (y <= 0))
		return ;
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			ft_putchar03(row, col, x, y);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
