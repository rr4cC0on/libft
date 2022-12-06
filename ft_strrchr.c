/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:57:05 by nlence-l          #+#    #+#             */
/*   Updated: 2022/12/02 20:30:54 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c_char;
	char	*cs;

	cs = (char *)s;
	c_char = c;
	i = ft_strlen(cs);
	while (i >= 0)
	{
		if (cs[i] == c_char)
			return (cs + i);
		i--;
	}
	return (NULL);
}
/*
int main()
{
	char tab[10] = "TEST42";
	char *ptr;
	ptr = ft_strrchr(tab, 84);
	printf("%p\n", ptr);
	printf("%p\n", tab+3);
	printf("%p\n", tab);
}*/
