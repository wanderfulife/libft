/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoWander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:25:31 by JoWander          #+#    #+#             */
/*   Updated: 2024/09/30 18:25:32 by JoWander         ###   ########.fr       */
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
