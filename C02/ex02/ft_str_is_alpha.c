/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 19:00:58 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/14 21:33:45 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			i = 0;
		str++;
	}
	return (i);
}

/*int main(int argc, char **argv)
{
	int	result;

	result = 0;
	if (argc >= 2)
	{
		result = ft_str_is_alpha(argv[1]);
		if (result == 1)
			printf("The string contains letters of the alphabet\n");
		else
			printf("The string contains alphanumeric\n");
	}
	else
		printf("VAMOS: Try again");
}*/
