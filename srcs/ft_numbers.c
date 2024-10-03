/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoWander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:23:33 by JoWander          #+#    #+#             */
/*   Updated: 2024/10/03 16:49:18 by JoWander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_print_int(va_list *args)
{
	int	num;
	int	count;

	num = va_arg(*args, int);
	count = 0;
	if (num < 0)
	{
		ft_putchar_fd('-', 1);
		count++;
		if (num == INT_MIN)
		{
			ft_putstr_fd("2147483648", 1);
			return (11);
		}
		num = -num;
	}
	ft_putnbr_fd(num, 1);
	return (ft_numlen(num) + count);
}

int	ft_print_unsigned(va_list *args)
{
	unsigned int	num;

	num = va_arg(*args, unsigned int);
	ft_putnbr_fd(num, 1);
	return (ft_numlen(num));
}

int	ft_numlen(long long num)
{
	int	len;

	len = 1;
	while (num / 10)
	{
		len++;
		num /= 10;
	}
	return (len);
}
