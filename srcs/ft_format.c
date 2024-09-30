/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: JWander <jowander@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:30:18 by jowander          #+#    #+#             */
/*   Updated: 2024/09/30 11:55:43 by JWander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
=======
/*   By: JoWander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:30:18 by joWander          #+#    #+#             */
/*   Updated: 2024/09/30 18:01:54 by JoWander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
>>>>>>> ebf0f94 (v1)

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
