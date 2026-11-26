/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:31:08 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/09 18:35:57 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
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
		result = ft_strupcase(argv[1]);
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
