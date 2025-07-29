/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:45:26 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/16 20:19:46 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

/*int main(void)
{
	char p[11] = "abcdefghij";
	char q[11];

	ft_strcpy(q, p);
	printf("%s", q);
}*/