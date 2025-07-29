/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:18:14 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/16 19:54:34 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if ('A' > *str | 'Z' < *str)
			return (0);
		str++;
	}
	return (1);
}

/*int main(void)
{
	char *p = "HELLOo 42worLD, Me ow";
	char *q = "KDFGHKDFBG";
	printf("%d\n", ft_str_is_uppercase(p));
	printf("%d", ft_str_is_uppercase(q));
}*/