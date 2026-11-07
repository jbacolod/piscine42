/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 23:09:02 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/16 23:15:54 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	value;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	value = 1;
	i = 1;
	while (i != nb + 1)
	{
		value = value * i;
		i++;
	}
	return (value);
}
