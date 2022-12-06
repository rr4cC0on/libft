/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:31:15 by nlence-l          #+#    #+#             */
/*   Updated: 2022/11/16 20:12:34 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned int	i;
	char			*cs1;
	char			*cs2;

	i = 0;
	cs1 = (char *)s1;
	cs2 = (char *)s2;
	if (size == 0)
		return (0);
	if ((int)ft_strlen(s1) == 0 && (int)ft_strlen(s2) == 0)
		return (0);
	while (i < size)
	{
		if (cs1[i] == cs2[i])
			i++;
		else
			return ((unsigned char)cs1[i] - (unsigned char)cs2[i]);
	}
	return (0);
}
