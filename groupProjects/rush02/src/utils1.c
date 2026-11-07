/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 10:44:43 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/25 14:29:09 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	if (!src)
		return ("");
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	ft_is_separator(char *str, char *sep)
{
	int	i;
	int	s_len;

	if (!str)
		return (0);
	s_len = ft_strlen(sep);
	i = -1;
	while (str[++i] && i < s_len)
	{
		if (!(str[i] == sep[i]))
			return (0);
		if (i == s_len - 1)
			return (1);
	}
	return (0);
}

int	ft_count_words(char *str, char *sep)
{
	int	i;
	int	sep_len;

	sep_len = ft_strlen(sep);
	if (!str)
		return (0);
	i = 0;
	while (ft_is_separator(&str[i], sep))
		i += sep_len;
	if (!str[i])
		return (0);
	while (str[i] && !ft_is_separator(&str[i], sep))
		i++;
	return (1 + ft_count_words(str + i, sep));
}

char	**ft_split(char *str, char *sep)
{
	char	**array;
	int		sep_len;
	int		w;
	int		i;
	int		j;
	int		words;

	sep_len = ft_strlen(sep);
	words = ft_count_words(str, sep);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	w = 0;
	while (w < words)
	{
		i = 0;
		while (ft_is_separator(&str[i], sep))
			i += sep_len;
		j = 0;
		while (str[i + j] && !ft_is_separator(&str[i + j], sep))
			j++;
		array[w] = (char *)malloc(sizeof(char) * (j + 1));
		ft_strncpy(array[w], str + i, j);
		*(ft_strncpy(array[w], str + i, j) + j) = '\0';
		str += i + j;
		w++;
	}
	array[words] = 0;
	return (array);
}
