/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:38:07 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/17 16:03:31 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i_result;
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	i_result = 0;
	while (i * i <= nb)
	{
		i_result = i * i;
		if (i_result == nb)
			return (i);
		i++;
	}
	return (0);
}
