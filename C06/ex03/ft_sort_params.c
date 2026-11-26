/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:42:42 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:56:42 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (argv[i])
	{
		j = 1;
		while (j < argc - 1 - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	j;

	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		j = 1;
		while (j < argc)
		{
			ft_putstr(argv[j]);
			j++;
		}
	}
	return (0);
}
