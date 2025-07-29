/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:20:21 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/16 19:54:53 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 | *str == 127)
			return (0);
		str++;
	}
	return (1);
}

/*int main(void)
{
	char p[21] = "HELLOo 42worLD, Me ow";
	char q[10] = "\np234 5567";
	printf("%d\n", ft_str_is_printable(p));
	printf("%d", ft_str_is_printable(q));
} */