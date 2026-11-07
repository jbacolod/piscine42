/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:42:09 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/20 18:10:01 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	value;

	if (argc >= 4)
	{
		value = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
		printf("%d", value);
	}
	else
		printf("AH RIPROVA");
}*/
