/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:51:06 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/10 18:36:31 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find || to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while ((to_find[j]) && (str[i + j] == to_find[j]))
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*result;

	if (argc == 3)
	{
		result = ft_strstr(argv[1], argv[2]);
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
