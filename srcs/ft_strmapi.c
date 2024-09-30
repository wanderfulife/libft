/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoWander <jowander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:25:25 by JoWander          #+#    #+#             */
/*   Updated: 2024/09/30 18:25:26 by JoWander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	ptr = ft_strdup(s);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (ptr[i] != '\0')
	{
		ptr[i] = f(i, ptr[i]);
		i++;
	}
	return (ptr);
}
