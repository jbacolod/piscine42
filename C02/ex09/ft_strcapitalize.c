/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:42:13 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/09 21:55:31 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	while (str[i])
	{
		if ((capitalize == 1) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if ((capitalize == 0) && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
					&& str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')))
			capitalize = 1;
		else
			capitalize = 0;
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
		result = ft_strcapitalize(argv[1]);
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
