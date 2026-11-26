/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:20:16 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/09 18:17:16 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97
					&& str[i] <= 122)))
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
		flag = ft_str_is_alpha(argv[1]);
		if (flag)
			write(1, "OK: ALPHA", 9);
		else
			write(1, "KO: INVALID", 13);
	}
	write(1, "\n", 1);
	return (0);
}*/
