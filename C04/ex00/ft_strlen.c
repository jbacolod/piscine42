/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 19:30:52 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/11 16:15:20 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		result;
	char	*hex;

	hex = "0123456789";
	if(argc == 2)
	{
		result = ft_strlen(argv[1]);
		if (result >= 10)
			write(1, &hex[result / 10], 1);
		write(1, &hex[result % 10], 1);
	}
	write(1, "\n", 1);
	return (0);
}*/
