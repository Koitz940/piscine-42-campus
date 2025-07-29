/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:08:28 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/22 17:41:59 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (start);
}

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

char	*ft_strdup(char *src)
{
	return (ft_strcpy(malloc(sizeof(char) * (1 + ft_strlen(src))), src));
}
/*
#include <stdio.h>
int main(void)
{
	char a[] = "abcd";
	char *b = ft_strdup(a);
	printf("%s", b);
}
*/
