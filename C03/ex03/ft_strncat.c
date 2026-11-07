/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:16:19 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/14 21:22:41 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && (unsigned int) nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (temp);
}

/*int	main(int argc, char **argv)
{
	int		i;
	char	*result;
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
		result = ft_strncat(dest, argv[2], atoi(argv[3]));
		printf("Beginning string: %s\n", dest);
		printf("Final string: %s\n", result);
	}
	else
		printf("VAMOS: TRY AGAIN");
}*/
