/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:42:56 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/17 22:12:40 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	ris;

	ris = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb >= 2)
		ris = nb * ft_recursive_factorial(nb - 1);
	else
		ris = 1 * nb;
	return (ris);
}
