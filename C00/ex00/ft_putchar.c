/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:05:31 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/06 13:10:34 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
// Uncommented and it can be tested the function created previously
/*int	main(void)
{
	char	c;

	c = 'J';
	ft_putchar(c);
	ft_putchar(10);
}*/
