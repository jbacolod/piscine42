/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:41:01 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/09 18:19:24 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			flag = 0;
		i++;
	}
	return (flag);
}
/*#include <unistd.h>

int	main(int argc, char **argv)
{
	int	flag;

	if (argc == 2)
	{
		flag = ft_str_is_numeric(argv[1]);
		if (flag)
			write(1, "OK: DIGITS", 10);
		else
			write(1, "KO: INVALID", 11);
	}
	write(1, "\n", 1);
	return (0);
}*/
