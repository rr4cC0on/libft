/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:48:32 by nlence-l          #+#    #+#             */
/*   Updated: 2022/11/07 18:48:44 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*cs;

	cs = (char *)s;
	cc = (char)c;
	i = 0;
	while (i <= ft_strlen(cs))
	{
		if (cs[i] == cc)
			return (cs + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char s1[10] = "test42";
	char x = '\0';

	printf("%p\n", ft_strchr(s1, x));
	printf("%p\n", strchr(s1, x));

	return 0;
}*/
