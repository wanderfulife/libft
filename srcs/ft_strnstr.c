/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: Jowander <Jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:37:00 by Jowander          #+#    #+#             */
/*   Updated: 2024/05/30 15:16:19 by Jowander         ###   ########.fr       */
=======
/*   By: JoWander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:37:00 by JoWander          #+#    #+#             */
/*   Updated: 2024/09/30 17:59:20 by JoWander         ###   ########.fr       */
>>>>>>> ebf0f94 (v1)
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == *needle)
		{
			if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			{
				if (i + needle_len > len)
					return (NULL);
				return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
