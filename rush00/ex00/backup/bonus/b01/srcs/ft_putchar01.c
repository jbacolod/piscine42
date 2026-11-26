/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 22:16:27 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/14 11:56:10 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_header.h"

void	ft_putchar01(int row, int col, int x, int y)
{
	if ((row == 0 && col == 0) || (row == y - 1 && col == x - 1 && (x > 1
				&& y > 1)))
		write(1, "/", 1);
	else if ((row == 0 && col == x - 1) || (row == y - 1 && col == 0))
		write(1, "\\", 1);
	else if (row == 0 || col == 0 || row == y - 1 || col == x - 1)
		write(1, "*", 1);
	else
		write(1, " ", 1);
}
