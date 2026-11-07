/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loguicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 15:26:52 by loguicha          #+#    #+#             */
/*   Updated: 2026/10/25 14:24:51 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		size;
	char	*text;
	char	***dict;

	text = (char *)malloc(700 * sizeof(char));
	if (argc)
	fd = open("./numbers.dict", O_RDONLY);
	size = read(fd, text, 700);
	text[size] = '\0';
	dict = dict_to_array(text);
	
	printf("%s\n", argv[1]);
	// CHECK IF VALID = is_numeric(argv[1]);
	// 42 => words
	// % 10 = 2 => convert to word
	// 42 / 10 = 4 => convert to multiple of ten "40"
	// we start from the right 42<- and we go towards the left ->42
	// <-2147483647<-

	ft_print_nb(ft_atoi(argv[1]), dict);

	return (0);
}
