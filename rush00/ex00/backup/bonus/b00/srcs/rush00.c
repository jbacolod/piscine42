/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 22:06:48 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/14 11:52:41 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_header.h"

void	rush(int x, int y)
{
	int	row;
	int	col;

	if ((x <= 0) || (y <= 0))
		return ;
	if ((x >= 48 && x <= 57) || (y >= 48 && y <= 57))
		return ;
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			ft_putchar00(row, col, x, y);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
