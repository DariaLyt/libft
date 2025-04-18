/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlytvync <dlytvync@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:36:11 by dlytvync          #+#    #+#             */
/*   Updated: 2025/04/15 17:08:53 by dlytvync         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lenght;
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	lenght = ft_strlen(little);
	while (i + lenght <= len && big[i] != '\0')
	{
		j = 0;
		while (j < lenght && big[i + j] == little[j])
			j++;
		if (j == lenght)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
