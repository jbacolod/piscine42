/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:53:45 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/22 19:05:45 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

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

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_is_separator(str[i], charset))
			i++;
		if (str[i] && !(ft_is_separator(str[i], charset)))
		{
			count++;
			while (str[i] && !(ft_is_separator(str[i], charset)))
				i++;
		}
	}
	return (count);
}

char	*ft_word_dup(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	len = 0;
	while (str[len] && !ft_is_separator(str[len], charset))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		words;
	int		i;

	if (!str || !charset)
		return (NULL);
	words = ft_count_words(str, charset);
	dest = malloc((words + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && ft_is_separator(*str, charset))
			str++;
		if (*str && !ft_is_separator(*str, charset))
		{
			dest[i] = ft_word_dup(str, charset);
			i++;
			while (*str && !ft_is_separator(*str, charset))
				str++;
		}
	}
	dest[i] = NULL;
	return (dest);
}
