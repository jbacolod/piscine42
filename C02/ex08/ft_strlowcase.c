/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:37:37 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/09 18:41:07 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char	*result;

	if (argc == 2)
	{
		result = ft_strlowcase(argv[1]);
		i = 0;
		while (result[i])
		{
			write(1, &result[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}*/
