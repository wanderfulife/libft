/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: JWander <jowander@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:30:18 by jowander          #+#    #+#             */
/*   Updated: 2024/09/30 11:59:17 by JWander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
=======
/*   By: JoWander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:30:18 by JoWander          #+#    #+#             */
/*   Updated: 2024/09/30 18:01:06 by JoWander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
>>>>>>> ebf0f94 (v1)

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
			return (11); // "-" + 10 digits
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

static int	ft_uintlen(unsigned int n)
{
	int	len;

	len = 1;
	while (n / 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_uintlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

int	ft_print_uint(va_list *args)
{
	unsigned int	num;
	char			*str;
	int				len;

	num = va_arg(*args, unsigned int);
	str = ft_uitoa(num);
	if (!str)
		return (0);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
