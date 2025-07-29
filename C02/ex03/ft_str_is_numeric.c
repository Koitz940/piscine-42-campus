/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:14:57 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/16 18:13:22 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!('0' <= *str && '9' >= *str))
			return (0);
		str++;
	}
	return (1);
}

/*int main(void)
{
	char *p = "HELLOo 42worLD, Me ow";
	char *q = "78346349865349";
	printf("%d\n", ft_str_is_numeric(p));
	printf("%d", ft_str_is_numeric(q));
}*/