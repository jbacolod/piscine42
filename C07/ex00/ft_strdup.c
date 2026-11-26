/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 21:15:54 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:56:52 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		src_len;
	char	*dest;

	src_len = ft_strlen(src) + 1;
	dest = malloc(src_len * sizeof(char *));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*dest;

	if (argc == 2)
	{
		dest = ft_strdup(argv[1]);
		i = 0;
		while (dest[i])
		{
			write(1, &dest[i], 1);
			i++;
		}
		free(dest);
	}
	write(1, "\n", 1);
	return (0);
}*/
