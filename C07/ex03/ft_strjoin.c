/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:05:14 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/23 12:15:47 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++ != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*star;

	star = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (star);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	size_t	sum;

	sum = 1;
	i = -1;
	while (++i < size)
	{
		sum += ft_strlen(strs[i]);
		if (size != i + 1)
			sum += ft_strlen(sep);
	}
	i = -1;
	str = malloc(sizeof(char) * sum);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	while (++i < size)
	{
		ft_strcat(str, strs[i]);
		if (i + 1 != size)
			ft_strcat(str, sep);
	}
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char *p = "abcd";
	char *q = "cdef";
	char *e = "ghij";
	char *s = "klmn";
	char **all = malloc(4 * sizeof(char *));
	all[0] = p;
	all[1] = q;
	all[2] = e;
	all[3] = s;
	printf("%s\n", ft_strjoin(0, all, " "));
	printf("%s\n", ft_strjoin(0, all, ""));
	printf("%s\n", ft_strjoin(2, all, " "));
	printf("%s\n", ft_strjoin(2, all, ""));
	printf("%s\n", ft_strjoin(4, all, " "));
	printf("%s\n", ft_strjoin(4, all, ""));
}
*/