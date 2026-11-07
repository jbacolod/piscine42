/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:26:33 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/17 13:14:12 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = nb * 1;
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	i = 0;
	if (nb < 0)
	{
		while (i != power - 1)
		{
			result = result * nb;
			i++;
		}
	}
	while (i != power - 1)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
