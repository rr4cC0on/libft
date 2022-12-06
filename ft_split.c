/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:39:37 by nlence-l          #+#    #+#             */
/*   Updated: 2022/12/06 09:55:07 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s && *s != c)
				s++;
			words++;
			continue ;
		}
		s++;
	}
	return (words);
}

static const char	*ft_make(char **dest, const char *src, char c)
{
	size_t	len;
	size_t	i;

	while (*src == c)
		src++;
	len = 0;
	while (src[len] != '\0' && src[len] != c)
		len++;
	*dest = (char *)malloc(sizeof(char) * (len + 1));
	if (*dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		(*dest)[i] = src[i];
		i++;
	}
	(*dest)[i] = '\0';
	src += len + 1;
	return (src);
}

static void	free_res(char ***res, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free((*res)[i]);
		i++;
	}
	res = NULL;
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	words;
	size_t	i;

	if (!s)
		return (0);
	words = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (res != NULL)
	{
		res[words] = NULL;
		i = 0;
		while (i < words)
		{
			s = ft_make(res + i, s, c);
			if (s == NULL)
			{
				free_res(&res, i);
				break ;
			}
			i++;
		}
	}
	return (res);
}
/*
int main(int ac, char **av)
{
	(void)ac;
	size_t i = 0;
	while (i < count_words(av[1], av[2][0]))
	{
		printf("%s\n", ft_split(av[1], av[2][0])[i]);
		i++;
	}
	return (0);
}*/
