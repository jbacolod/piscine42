/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 19:21:04 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:50:18 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(int argc, char **argv)
{
	char	dest[100];
	char	*result;
	int	i;
	if (argc == 2)
	{
		result = ft_strcpy(dest, argv[1]);
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
