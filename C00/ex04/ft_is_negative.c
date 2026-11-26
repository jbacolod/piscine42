/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:22:36 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:48:28 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	sign = 'N';
	if (n >= 0)
		sign = 'P';
	write(1, &sign, 1);
}
// Testing the function that we created
/*int	main(void)
{
	int	n;

	n = 20;
	ft_is_negative(n);
	write(1, "\n", 1);
}*/
