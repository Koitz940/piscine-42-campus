/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:07:31 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/29 16:58:15 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strndup(char *src, unsigned int n)
{
	unsigned int		i;
	char				*dest;

	dest = malloc(sizeof(char) * (n + 1));
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_find(char a, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_sections(char *str, char *charset)
{
	int	n;
	int	check;

	n = 0;
	check = 0;
	while (*str)
	{
		while (*str && ft_find(*str, charset) != -1)
			str++;
		while (*str && ft_find(*str, charset) == -1)
		{
			check = 1;
			str++;
		}
		if (check)
			n += 1;
		check = 0;
	}
	return (n);
}

char	**ft_split(char *str, char *charset)
{
	char			**result;
	char			*aux;
	unsigned int	n;
	int				i;

	result = malloc(sizeof(char *) * ft_sections(str, charset) + 1);
	i = 0;
	while (*str)
	{
		while (*str && ft_find(*str, charset) != -1)
			str++;
		n = 0;
		aux = str;
		while (*str && ft_find(*str, charset) == -1)
		{
			str++;
			n++;
		}
		if (n)
			result[i++] = ft_strndup(aux, n);
	}
	result[i] = NULL;
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	char *p = "he  llo";
	char **list = ft_split(p, " e");
	int i = 0;
	while (list[i])
		printf("%s\n", list[i++]);
}
*/