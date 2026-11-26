/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 21:28:21 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:59:43 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !(ft_is_separator(str[i], charset)))
		i++;
	return (i);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		while (ft_is_separator(str[i], charset))
			i++;
		while (!(ft_is_separator(str[i], charset)) && str[i])
			i++;
		c++;
	}
	return (c);
}

char	**ft_split_aus(char **dest, char *str, char *charset, int count_words)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < count_words)
	{
		while (*str && ft_is_separator(*str, charset))
			str++;
		len = ft_word_len(str, charset);
		dest[i] = malloc((len + 1) * sizeof(char));
		if (!(dest[i]))
			return (NULL);
		j = 0;
		while (j < len)
		{
			dest[i][j] = str[j];
			j++;
		}
		dest[i][len] = 0;
		str += len;
		i++;
	}
	dest[i] = NULL;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		count_words;
	char	**dest;

	count_words = ft_count_words(str, charset);
	dest = malloc((count_words + 1) * sizeof(char *));
	if (!(dest))
		return (NULL);
	return (ft_split_aus(dest, str, charset, count_words));
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	**result;
	int		i;

	if (ac == 3)
	{
		result = ft_split(av[1], av[2]);
		if (!result)
		{
			printf("Errore: allocazione fallita.\n");
			return (1);
		}

		i = 0;
		while (result[i] != NULL)
		{
			printf("Parola [%d]: %s\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	return (0);
}*/
