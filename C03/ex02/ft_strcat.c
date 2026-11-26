/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:33:25 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/10 17:40:06 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <unistd.h>

int	main(int argc,  char **argv)
{
	int		i;
	char	*dest;

	if (argc == 3)
	{
		dest = ft_strcat(argv[1], argv[2]);
		i = 0;
		while (dest[i])
		{
			write(1, &dest[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}*/
