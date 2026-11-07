/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 21:31:02 by jbacolod          #+#    #+#             */
/*   Updated: 2026/10/11 22:11:26 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_combn_rec(int n, int index, int start)
{
    int i;
    
    if (index == n)
        return ;
    else
    {
        i = start;
        while (i <= 9)
        {
            i++;
        }
    }
}

void    ft_print_combn(int n)
{
    int index;
    int start;
    
    index = 0;
    start = 1;
    if (n > 0 && n < 10)
    {
        ft_print_combn_rec(n, index, start);
    }
    else
        write(1, "Error: Try again!", 17);
}

