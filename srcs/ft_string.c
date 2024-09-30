/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: JWander <jowander@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:30:18 by jowander          #+#    #+#             */
/*   Updated: 2024/09/30 11:57:45 by JWander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
=======
/*   By: JoWander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:30:18 by JoWander          #+#    #+#             */
/*   Updated: 2024/09/30 18:00:05 by JoWander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
>>>>>>> ebf0f94 (v1)

int	ft_print_char(va_list *args)
{
	char	c;

	c = va_arg(*args, int);
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_string(va_list *args)
{
	char	*str;
	int		count;

	str = va_arg(*args, char *);
	if (!str)
		return (write(1, "(null)", 6));
	count = 0;
	while (str[count])
	{
		ft_putchar_fd(str[count], 1);
		count++;
	}
	return (count);
}

int	ft_print_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
