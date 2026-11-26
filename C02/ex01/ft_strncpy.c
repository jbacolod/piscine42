/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:39:28 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:50:21 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while ((src[i]) && (n > 0))
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}

/*#include <stdlib.h>
int	main(int argc, char **argv)
{
	int	i;
	char	tab[100];
	char	*result;

	if (argc == 3)
	{
		result = ft_strncpy(tab, argv[1], (unsigned int)atoi(argv[2]));
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
