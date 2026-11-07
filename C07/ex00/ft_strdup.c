/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:58:13 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/22 11:20:44 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	int	strlen;

	strlen = 0;
	i = 0;
	while (str[i] != '\0')
	{
		strlen++;
		i++;
	}
	return (strlen);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		srclen;
	int		i;

	srclen = ft_strlen(src) + 1;
	dest = malloc(srclen * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(int argc, char **argv)
{
	char	*dest;

	if (argc >= 1)
	{
		printf("La stringa %s copiata verra' copiata.\n", argv[1]);
		dest = ft_strdup(argv[1]);
		printf("Stringa copiata in dest: %s\n", dest);
	}
	else
		printf("AH!! RIPROVA");
}*/
