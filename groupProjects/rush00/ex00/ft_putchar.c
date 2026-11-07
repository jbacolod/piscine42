/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 11:12:09 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/11 12:29:59 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int row, int col, int x, int y)
{
	if (row == 0 || row == y - 1)
	{
		if (col == 0 || col == x - 1)
		{
			if (row == 0)
				write(1, "A", 1);
			else
				write(1, "C", 1);
		}
		else
		{
			write(1, "B", 1);
		}
	}
	else
	{
		if (col == 0 || col == x - 1)
			write(1, "B", 1);
		else
			write(1, " ", 1);
	}
}
