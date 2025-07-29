/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:12:30 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/17 17:20:34 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
#include <stdio.h>
int main()
{
	char p[10] = "abcd";
	char *q = "efghi";
	ft_strcat(p, q);
	printf("%s", p);
}*/