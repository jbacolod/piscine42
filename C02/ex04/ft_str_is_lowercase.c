/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:48:57 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/09 18:20:49 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (!(str[i] >= 97 && str[i] <= 122))
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
		flag = ft_str_is_lowercase(argv[1]);
		if (flag == 1)
			write(1, "OK: LOWERCASE", 13);
		else
			write(1, "KO: INVALID", 12);
	}
	write(1, "\n", 1);
	return (0);
}*/
