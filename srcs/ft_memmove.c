/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: jowander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:08:53 by Jowander          #+#    #+#             */
/*   Updated: 2024/05/28 16:08:41 by jowander         ###   ########.fr       */
=======
/*   By: JoWander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:08:53 by JoWander          #+#    #+#             */
/*   Updated: 2024/09/30 18:01:13 by JoWander         ###   ########.fr       */
>>>>>>> ebf0f94 (v1)
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_reverse_cpy(void *dest, const void *src, size_t n)
{
	while (n > 0)
	{
		((char *)dest)[n - 1] = ((char *)src)[n - 1];
		n--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst > src)
	{
		ft_reverse_cpy(dst, src, n);
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
