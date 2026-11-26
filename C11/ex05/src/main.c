/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 20:18:44 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/20 11:09:22 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_operations(int a, char *sign, int b)
{
	int	result;
	int	(*operations[5])(int, int);

	operations[0] = ft_addition;
	operations[1] = ft_subtract;
	operations[2] = ft_multiply;
	operations[3] = ft_divide;
	operations[4] = ft_modulo;
	if (sign[0] == '+')
		result = operations[0](a, b);
	else if (sign[0] == '-')
		result = operations[1](a, b);
	else if (sign[0] == '*')
		result = operations[2](a, b);
	else if (sign[0] == '/')
		result = operations[3](a, b);
	else if (sign[0] == '%')
		result = operations[4](a, b);
	return (result);
}

void	ft_do_op(char *nbr1, char *sign, char *nbr2)
{
	int	a;
	int	b;
	int	result;

	a = ft_atoi(nbr1);
	b = ft_atoi(nbr2);
	result = 1;
	if (!(sign[0] == '+' || sign[0] == '-' || sign[0] == '*' || sign[0] == '/'
			|| sign[0] == '%'))
		ft_putnbr(0);
	else if (b == 0 && sign[0] == '/')
		ft_putstr("Stop : division by zero\n");
	else if (b == 0 && sign[0] == '%')
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		result *= ft_operations(a, sign, b);
		ft_putnbr(result);
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
		ft_do_op(av[1], av[2], av[3]);
	return (0);
}
