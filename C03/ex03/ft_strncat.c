/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:41:29 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/10 17:50:03 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && nb > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	while (nb > 0)
	{
		dest[i] = '\0';
		i++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*dest;

	if (argc == 4)
	{
		dest = ft_strncat(argv[1], argv[2], atoi(argv[3]));
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
