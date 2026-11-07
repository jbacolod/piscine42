/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:24:48 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/22 12:40:09 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_total_len(int size, char **strs)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	return (total_len);
}

int	ft_putstr(char *src, char *dest, int index)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[index] = src[j];
		index++;
		j++;
	}
	return (index);
}

char	*ft_strcat(int size, char **strs, char *sep, char *dest)
{
	int	i;
	int	index_dest;

	i = 0;
	index_dest = 0;
	while (i < size)
	{
		index_dest = ft_putstr(strs[i], dest, index_dest);
		if (i < size - 1)
			index_dest = ft_putstr(sep, dest, index_dest);
		i++;
	}
	dest[index_dest] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		len_strs;
	int		len_sep;
	int		total_len;

	if (size == 0)
	{
		dest = malloc(1);
		if (dest == NULL)
			return (NULL);
		*dest = '\0';
		return (dest);
	}
	len_strs = ft_total_len(size, strs);
	len_sep = ft_strlen(sep) * (size - 1);
	total_len = len_strs + len_sep;
	dest = malloc((total_len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest = ft_strcat(size, strs, sep, dest);
	return (dest);
}
