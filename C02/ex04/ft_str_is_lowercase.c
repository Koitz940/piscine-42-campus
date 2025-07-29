/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:16:54 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/16 20:25:13 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if ('a' > *str | 'z' < *str)
			return (0);
		str++;
	}
	return (1);
}

/*int main(void)
{
	char *p = "HELLOo 42worLD, Me ow";
	char *q = "jhgberjkgbler";
	printf("%d\n", ft_str_is_lowercase(p));
	printf("%d", ft_str_is_lowercase(q));
}*/