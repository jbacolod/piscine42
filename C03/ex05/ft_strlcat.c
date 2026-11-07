/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 19:39:38 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/21 16:36:48 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	personal_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;
	unsigned int	j;

	if (!dest || !src)
		return (0);
	len_dest = personal_strlen(dest);
	len_src = personal_strlen(src);
	if (size <= len_dest)
		return (size + len_src);
	i = 0;
	while (dest[i] && i < size - 1)
		i++;
	j = 0;
	while (src[j] && (i + 1 < size))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}
/*int	main(int argc, char **argv)
{
	int		result;
	int		i;
	char	dest[20];

	if (argc >= 4)
	{
		i = 0;
		while (argv[1][i] && i < 19)
		{
			dest[i] = argv[1][i];
			i++;
		}
		dest[i] = '\0';
		result = ft_strlcat(dest, argv[2], atoi(argv[3]));
		printf("Final string is: %s SIUUUUM\n", dest);
		printf("Size of the final string is: %u\n", result);
	}
	else
		printf("RIPROVA STUPIDO: ./a.out <dest> <src> <size>\n");
}*/
