/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:31:24 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/16 17:55:08 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if ('A' <= *str && 'Z' >= *str)
			*str = *str + 32;
		str++;
	}
	return (start);
}

/*int main(void)
{
	char p[21] = "HELLOo 42worLD, Me ow";
	
	ft_strlowcase(p);
	printf("%s", p);
}*/
