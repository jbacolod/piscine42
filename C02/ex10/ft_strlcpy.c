/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:28:44 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/09 22:13:08 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char ** argv)
{
	int	value;
	char	tab[100];

	if (argc == 3)
	{
		value = ft_strlcpy(tab, argv[1], atoi(argv[2]));
		printf("Total lenght: %d\n", value);
	}
	return (0);
}*/
