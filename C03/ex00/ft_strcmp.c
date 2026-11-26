/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:08:49 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/10 17:21:52 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <unistd.h>

int	main(int argc, char **argv)
{
	int		result;
	char	*hex;

	hex = "0123456789";
	if (argc == 3)
	{
		result = ft_strcmp(argv[1], argv[2]);
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
