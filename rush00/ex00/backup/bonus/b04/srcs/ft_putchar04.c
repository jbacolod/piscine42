/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar04.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:04:55 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/14 12:01:25 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_header.h"

void	ft_putchar04(int row, int col, int x, int y)
{
	if ((row == 0 && col == 0) || (row == y - 1 && col == x - 1 && (x > 1
				&& y > 1)))
		write(1, "A", 1);
	else if ((row == 0 && col == x - 1) || (row == y - 1 && col == 0))
		write(1, "C", 1);
	else if (row == 0 || col == 0 || row == y - 1 || col == x - 1)
		write(1, "B", 1);
	else
		write(1, " ", 1);
}
