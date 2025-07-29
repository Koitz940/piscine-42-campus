/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:20:24 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/17 19:39:03 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*star;

	star = dest;
	while (*dest)
		dest++;
	while (*src && nb--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (star);
}

/*
#include <stdio.h>
int main()
{
	char p[10] = "abcd";
	char *q = "efghi";
	ft_strncat(p, q, 5);
	printf("%s", p);
}*/