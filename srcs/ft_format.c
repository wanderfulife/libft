/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoWander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:30:18 by jowander          #+#    #+#             */
/*   Updated: 2024/09/30 18:22:17 by JoWander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_print_hex(va_list *args, bool uppercase)
{
	unsigned int	number;

	number = va_arg(*args, unsigned int);
	return (ft_print_num_as_hex(number, uppercase));
}

int	ft_print_pointer(va_list *args)
{
	unsigned long long	address;
	int					count;

	address = va_arg(*args, unsigned long long);
	if (address == 0)
		return (write(1, "(nil)", 5));
	count = write(1, "0x", 2);
	count += ft_print_hex_address(address);
	return (count);
}
