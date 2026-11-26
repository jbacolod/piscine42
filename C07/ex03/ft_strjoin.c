/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:54:47 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:56:59 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_check_size(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (!(str))
		return (NULL);
	str[0] = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin_aus(char *strjoin, int size, char **strs, char *sep)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			strjoin[k] = strs[i][j];
			j++;
			k++;
		}
		if (i != size - 1)
		{
			j = 0;
			while (sep[j])
			{
				strjoin[k] = sep[j];
				j++;
				k++;
			}
		}
		i++;
	}
	strjoin[k] = '\0';
	return (strjoin);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*strjoin;

	if (size < 0)
		return (NULL);
	if (size == 0)
		return (ft_check_size());
	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += (ft_strlen(sep) * (size - 1));
	strjoin = malloc((total_len + 1) * sizeof(char));
	if (!(strjoin))
		return (NULL);
	return (ft_strjoin_aus(strjoin, size, strs, sep));
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	*result;

	if (argc >= 4)
	{
		result = ft_strjoin(argc - 2, &argv[1], argv[argc -1]);
		if (result)
		{
			printf("%s\n", result);
			free(result);
		}
	}
	return (0);
}*/
