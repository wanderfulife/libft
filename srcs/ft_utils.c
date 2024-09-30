/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: JWander <jowander@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:30:18 by jowander          #+#    #+#             */
/*   Updated: 2024/09/30 11:58:47 by JWander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
=======
/*   By: JoWander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:30:18 by JoWander          #+#    #+#             */
/*   Updated: 2024/09/30 17:59:03 by JoWander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
>>>>>>> ebf0f94 (v1)

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_num_as_hex(unsigned long long num, bool uppercase)
{
	int		count;
	char	*digits;

	count = 0;
	digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
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
