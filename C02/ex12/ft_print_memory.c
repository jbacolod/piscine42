/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbacolod <jbacolod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 12:58:22 by jbacolod          #+#    #+#             */
/*   Updated: 2026/11/21 12:50:52 by jbacolod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_chars(unsigned char *ptr, unsigned int rem_size)
{
	unsigned int	j;

	j = 0;
	while (j < 16 && j < rem_size)
	{
		if (ptr[j] >= 32 && ptr[j] <= 126)
			write(1, &ptr[j], 1);
		else
			write(1, ".", 1);
		j++;
	}
}

void	ft_print_hex(unsigned char *ptr, unsigned int rem_size)
{
	unsigned int	j;
	char			*hex;

	j = 0;
	hex = "0123456789abcdef";
	while (j < 16)
	{
		if (j < rem_size)
		{
			write(1, &hex[ptr[j] / 16], 1);
			write(1, &hex[ptr[j] % 16], 1);
		}
		else
			write(1, "\x20\x20", 2);
		if (j % 2 != 0)
			write(1, " ", 1);
		j++;
	}
}

void	ft_print_addr(void *ptr)
{
	int				i;
	char			*hex;
	char			array_addr[16];
	unsigned long	addr;

	addr = (unsigned long)ptr;
	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		array_addr[i] = hex[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, array_addr, 16);
	write(1, ": ", 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)addr;
	if (size == 0)
		return (ptr);
	i = 0;
	while (i < size)
	{
		ft_print_addr(ptr + i);
		ft_print_hex(ptr + i, size - i);
		ft_print_chars(ptr + i, size - i);
		write(1, "\n", 1);
		i += 16;
	}
	return (ptr);
}
/*
int	main(void)
{
	ft_print_memory("Bonjour les aminches\t\n\tc est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\nlol.lol\n ",
		92);
	return (0);
}*/
