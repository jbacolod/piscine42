/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 21:01:39 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/15 19:08:12 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_capitalize(char *ptr, int capitalize)
{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
		if (capitalize == 1)
			*ptr -= 32;
		return (0);
	}
	else if (*ptr >= 'A' && *ptr <= 'Z')
	{
		if (capitalize == 0)
			*ptr += 32;
		return (0);
	}
	else if (*ptr >= '0' && *ptr <= '9')
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	int		capitalize;

	capitalize = 1;
	ptr = str;
	while (*ptr)
	{
		capitalize = ft_char_capitalize(ptr, capitalize);
		ptr++;
	}
	return (str);
}

/*int	main(int argc, char **argv)
{
	char	*result;

	if (argc >= 2)
	{
		result = ft_strcapitalize(argv[1]);
		printf("The string capitalized is: %s\n", result);
	}
	else
		printf("VAMOS: Try again");
}*/
