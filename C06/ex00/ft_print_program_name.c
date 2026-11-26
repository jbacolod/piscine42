/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:22:26 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:56:32 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	if (argc >= 1)
	{
		j = 0;
		while (argv[0][j])
		{
			write(1, &argv[0][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
