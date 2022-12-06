/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:34:36 by nlence-l          #+#    #+#             */
/*   Updated: 2022/11/13 14:45:14 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space_parser(char *str, int i)
{
	if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' \
				|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (space_parser(str, i))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] <= '9' && str[i] >= '0')
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
	}
	return (res * sign);
}
/*
int main()
{
	//printf("%d\n", ft_atoi("\n\n\n  -46\b9 \n5d6"));
	//printf("%d\n", ft_atoi("\n\n\n  -46\b9 \n5d6"));
	printf("%d\n", ft_atoi("-3"));
	printf("%d\n", atoi("-3"));

	return 0;
}*/
