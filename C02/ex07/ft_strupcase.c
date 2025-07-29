/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:27:52 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/16 20:26:50 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if ('a' <= *str && 'z' >= *str)
			*str = *str - 32;
		str++;
	}
	return (start);
}

/*int main(void)
{
	char p[] = "HELLOo 42worLD, Me ow";
	
	ft_strupcase(p);
	printf("%s", p);
}*/