/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:10:06 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/16 18:14:51 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!('a' <= *str && 'z' >= *str) && !('A' <= *str && 'Z' >= *str))
			return (0);
		str++;
	}
	return (1);
}

/*int main(void)
{
	char *p = "HELLOo 42worLD, Me ow";
	char *q = "AodhgoNGEOiUBknNPI";
	printf("%d\n", ft_str_is_alpha(p));
	printf("%d", ft_str_is_alpha(q));
}*/