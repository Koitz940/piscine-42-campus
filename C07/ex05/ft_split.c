/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:31:07 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/28 21:32:42 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strpcpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
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

	n = 0;
	while (*str)
	{
		while (*str && ft_find(*str, charset) == -1)
			str++;
		while (*str && ft_find(*str, charset) != -1)
			str++;
		n += 1;
	}
	return (n);
}

char	**ft_split(char *str, char *charset)
{
	char			**result;
	char			*aux;
	unsigned int	n;
	char			*to_cpy;
	int				i;

	result = malloc(sizeof(char *) * ft_sections(str, charset));
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
		to_cpy = malloc((n + 1) * sizeof(char));
		ft_strpcpy(to_cpy, aux, n);
		result[i] = to_cpy;
		i++;
	}
	return (result);
}

/*
#include <stdio.h>
int main(void)
{
	char *p = "hello world, I am very happy  and you too  right? ";
	char **split = ft_split(p, "");
	printf("%s", split[0]);
}
*/
