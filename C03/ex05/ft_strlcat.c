/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:38:38 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/17 22:57:16 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	len = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size > dest_len)
		len = dest_len + src_len;
	else
		len = src_len + size;
	while (size > (dest_len + 1) && src[i])
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (len);
}

/*
#include <stdio.h>
int main()
{
	char p[10] = "abcd";
	char *q = "efghi";
	ft_strlcat(p, q, 10);
	printf("%s", p);
}*/