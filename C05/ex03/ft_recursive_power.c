/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:49:24 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/17 13:16:18 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb * 1;
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	if (nb < 0 || nb > 0)
	{
		if (power < 0)
			result = nb * ft_recursive_power(nb, power + 1);
		else
			result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}
