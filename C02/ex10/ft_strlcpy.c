/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 21:41:51 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/14 22:20:37 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	personal_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;

	len_src = personal_strlen(src);
	if (size == 0)
		return (len_src);
	while (*src && size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (len_src);
}

/*int	main(int argc, char **argv)
{
	char			dest[50];
	unsigned int	size;
	unsigned int	result;
	int				i;

	if (argc >= 4)
	{
		size = (unsigned int)atoi(argv[3]);
		i = 0;
		while (argv[1][i] && i < 49)
		{
			dest[i] = argv[1][i];
			i++;
		}
		dest[i] = '\0';
		printf("Prima: dest = [%s], src = [%s], size = %u\n", dest, argv[2],
			size);
		result = ft_strlcpy(dest, argv[2], size);
		printf("Dopo:  dest = [%s]\n", dest);
		printf("Valore restituito (len_src): %u\n", result);
	}
	else
		printf("Uso corretto: ./a.out <dest> <src> <size>\n");
	return (0);
}*/
