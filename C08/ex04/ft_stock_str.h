/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 11:03:45 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:39:59 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}			t_stock_str;

#endif
