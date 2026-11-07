/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 20:12:00 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/11 21:31:35 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	first_num;
	int	second_num;
	int	third_num;

	first_num = '0';
	while (first_num <= '7')
	{
		second_num = first_num + 1;
		while (second_num <= '8')
		{
			third_num = second_num + 1;
			while (third_num <= '9')
			{
				write(1, &first_num, 1);
				write(1, &second_num, 1);
				write(1, &third_num, 1);
				if (first_num < '7')
					write(1, ", ", 2);
				third_num++;
			}
			second_num++;
		}
		first_num++;
	}
}
