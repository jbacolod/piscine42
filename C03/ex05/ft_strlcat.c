/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:38:34 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/17 12:05:15 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	if (!(str))
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_check_dest(char *dest, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && dest[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_check_dest(dest, size);
	src_len = ft_strlen(src);
	if (dest_len == size)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return (dest_len + src_len);
}
/*
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int			i;
	unsigned int	result;
	char		*hex;
	char		dest[25];

	hex = "0123456789";
	if (argc == 4)
	{
		i = 0;
		while (argv[1][i])
		{
			dest[i] = argv[1][i];
			i++;
		}
		dest[i] = 0;
		result = ft_strlcat(dest, argv[2], atoi(argv[3]));
		write(1, &hex[result / 10], 1);
		write(1, &hex[result % 10], 1);
		write(1, "\n", 1);
		write(1, dest, ft_strlen(dest));
	}
	write(1, "\n", 1);
	return (0);
}*/
