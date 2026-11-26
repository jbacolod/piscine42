/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 21:59:36 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/14 11:52:24 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_header.h"

void	ft_putchar00(int row, int col, int x, int y)
{
	if ((row == 0) || (row == y - 1))
	{
		if ((col == 0) || (col == x - 1))
		{
			write(1, "o", 1);
		}
		else
			write(1, "-", 1);
	}
	else
	{
		if ((col == 0) || (col == x - 1))
			write(1, "|", 1);
		else
			write(1, " ", 1);
	}
}
