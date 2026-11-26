/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 22:16:11 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:50:49 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write(1, "\\", 1);
			write(1, &hex[(unsigned char)str[i] / 16], 1);
			write(1, &hex[(unsigned char)str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr_non_printable(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}*/
