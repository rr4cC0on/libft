/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:52:57 by nlence-l          #+#    #+#             */
/*   Updated: 2022/12/06 09:23:26 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!haystack && len == 0)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[j] && len > 0)
	{
		while (needle[i] == haystack[j] && len > 0)
		{
			i++;
			j++;
			len--;
			if (needle[i] == '\0')
				return ((char *)&haystack[j - ft_strlen(needle)]);
		}
		i = 0;
		j++;
		if (len != 0)
			len--;
	}
	return (NULL);
}
