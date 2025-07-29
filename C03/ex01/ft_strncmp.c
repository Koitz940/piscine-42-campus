/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:26:19 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/17 22:12:02 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n < 1)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && --n)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
#include <stdio.h>
int main(void)
{
	char *p = "abcdgfa";
	char *q = "abcdgf";
	printf("%d", ft_strncmp(p, q, 10));
}
*/