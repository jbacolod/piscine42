/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 20:40:29 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/20 11:10:02 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_addition(int a, int b);
int		ft_subtract(int a, int b);
int		ft_multiply(int a, int b);
int		ft_divide(int a, int b);
int		ft_modulo(int a, int b);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_putnbr_aus(int nbr);
void	ft_putnbr(int nbr);

#endif