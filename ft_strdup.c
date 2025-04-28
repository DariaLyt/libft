/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlytvync <dlytvync@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:41:07 by dlytvync          #+#    #+#             */
/*   Updated: 2025/04/16 10:52:59 by dlytvync         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	int		i;
	int		j;

	i = ft_strlen(s);
	duplicate = malloc(i + 1);
	if (duplicate == NULL)
		return (NULL);
	j = 0;
	while (s[j])
	{
		duplicate[j] = s[j];
		j++;
	}
	duplicate[j] = '\0';
	return (duplicate);
}
