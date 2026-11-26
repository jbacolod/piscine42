/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar03.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:48:56 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/14 11:58:53 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_header.h"

void	ft_putchar03(int row, int col, int x, int y)
{
	if ((row == 0) || (row == y - 1))
	{
		if (col == 0)
			write(1, "A", 1);
		else if (col == x - 1)
			write(1, "C", 1);
		else
			write(1, "B", 1);
	}
	else
	{
		if ((col == 0) || (col == x - 1))
			write(1, "B", 1);
		else
			write(1, " ", 1);
	}
}
