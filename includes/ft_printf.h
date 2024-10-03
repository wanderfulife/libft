/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoWander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:00:00 by jowander          #+#    #+#             */
/*   Updated: 2024/10/03 16:50:46 by JoWander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>
# include "libft.h"
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_handle_conversion(char type, va_list *args);
int		ft_print_char(va_list *args);
int		ft_print_string(va_list *args);
int		ft_print_pointer(va_list *args);
int		ft_print_int(va_list *args);
int		ft_print_uint(va_list *args);
int		ft_print_hex(va_list *args, bool uppercase);
int		ft_print_percent(void);
int		ft_print_num_as_hex(unsigned long long num, bool uppercase);
int		ft_print_hex_address(uintptr_t addr);
int		ft_numlen(long long num);

#endif