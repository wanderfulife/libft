/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoWander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:23:33 by JoWander          #+#    #+#             */
/*   Updated: 2024/09/30 18:23:34 by JoWander         ###   ########.fr       */
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
