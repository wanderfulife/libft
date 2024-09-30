/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: JWander <jowander@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 20:34:39 by jowander          #+#    #+#             */
/*   Updated: 2024/09/30 11:58:45 by JWander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
=======
/*   By: JoWander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 20:34:39 by JoWander          #+#    #+#             */
/*   Updated: 2024/09/30 18:01:00 by JoWander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
>>>>>>> ebf0f94 (v1)

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_handle_conversion(format[i], &args);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

int	ft_handle_conversion(char type, va_list *args)
{
	if (type == 'c')
		return (ft_print_char(args));
	else if (type == 's')
		return (ft_print_string(args));
	else if (type == 'p')
		return (ft_print_pointer(args));
	else if (type == 'd' || type == 'i')
		return (ft_print_int(args));
	else if (type == 'u')
		return (ft_print_uint(args));
	else if (type == 'x')
		return (ft_print_hex(args, false));
	else if (type == 'X')
		return (ft_print_hex(args, true));
	else if (type == '%')
		return (ft_print_percent());
	return (0);
}
