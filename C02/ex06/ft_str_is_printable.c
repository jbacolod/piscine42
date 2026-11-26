/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:23:15 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/09 18:29:27 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (!(str[i] >= 33 && str[i] <= 126))
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
		flag = ft_str_is_printable(argv[1]);
		if (flag)
			write(1, "OK: PRINTABLE", 13);
		else
			write(1, "KO: INVALID", 11);
	}
	write(1, "\n", 1);
	return (0);
}*/
