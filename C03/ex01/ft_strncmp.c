/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:26:10 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/10 17:32:14 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && n > 0)
	{
		i++;
		n--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	result;
	char	*hex;

	hex = "0123456789";
	if (argc == 4)
	{
		result = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
		if (result < 0)
		{
			write(1, "-", 1);
			result = -result;
		}
		write(1, &hex[result / 10], 1);
		write(1, &hex[result % 10], 1);
	}
	write(1, "\n", 1);
	return (0);
}*/
