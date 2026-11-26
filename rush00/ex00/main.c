/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 19:25:58 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/14 12:15:52 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	rush(int x, int y);

int	main(int argc, char **argv)
{
	if (argc == 3)
		rush(atoi(argv[1]), atoi(argv[2]));
	else
		return (0);
}
