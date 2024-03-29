/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 05:36:37 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/15 02:48:41 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Print character passed as parameter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Converts first character of line address to hexadecimal number
void	ft_convert_address_to_hexa(char *addr)
{
	long	laddrs;
	int		i;
	char	caddrs[15];

	laddrs = (long)addr;
	i = 0;
	while (laddrs != 0)
	{
		if (laddrs % 16 < 10)
			caddrs[i] = (laddrs % 16) + 48;
		else
			caddrs[i] = (laddrs % 16) + 87;
		i++;
		laddrs /= 16;
	}
	while (i < 15)
	{
		caddrs[i] = '0';
		i++;
	}
	while (--i >= 0)
		write(1, &caddrs[i], 1);
}

// Converts line message content to hexadecimal number
void	ft_content_to_hexa(char *addr)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (addr[i] == '\0')
			break ;
		ft_putchar(addr[i] / 16 + 48);
		if (addr[i] % 16 < 10)
			ft_putchar(addr[i] % 16 + 48);
		else
			ft_putchar(addr[i] % 16 + 87);
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
}

//	Print 16 characters of string per line
void	ft_print_line(char *addr)
{
	int		i;
	char	*addrcpy;

	addrcpy = addr;
	i = 0;
	while (addrcpy[i] != '\0' && i < 16)
	{
		if (addrcpy[i] < 32)
			write(1, ".", 1);
		else
			write(1, &addrcpy[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

//	Shows a memory zone on the screen
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*addrs;

	addrs = (char *)addr;
	i = 0;
	while (i < size)
	{
		ft_convert_address_to_hexa(addrs + i);
		write(1, ": ", 2);
		ft_content_to_hexa(addrs + i);
		ft_print_line(addrs + i);
		i += 16;
	}
	return (addr);
}
