/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoWander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:25:55 by JoWander          #+#    #+#             */
/*   Updated: 2024/10/03 16:38:23 by JoWander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_num_as_hex(unsigned long long num, bool uppercase)
{
	int		count;
	char	*digits;

	count = 0;
	if (uppercase)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	if (num >= 16)
		count += ft_print_num_as_hex(num / 16, uppercase);
	ft_putchar_fd(digits[num % 16], 1);
	return (count + 1);
}

int	ft_print_hex_address(uintptr_t addr)
{
	int		count;
	char	digit;

	count = 0;
	if (addr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (addr >= 16)
		count += ft_print_hex_address(addr / 16);
	digit = "0123456789abcdef"[addr % 16];
	write(1, &digit, 1);
	return (count + 1);
}
