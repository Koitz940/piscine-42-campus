/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:43:11 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/17 20:56:15 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	isalphanum(char a)
{
	if (('a' <= a && a <= 'z') || ('0' <= a && a <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*start;
	int		check;

	check = 1;
	start = str;
	while (*str != '\0')
	{
		if ('A' <= *str && 'Z' >= *str)
			*str += 32;
		str++;
	}
	str = start - 1;
	while (*++str != '\0')
	{
		if (check && ('a' <= *str && 'z' >= *str))
		{
			*str -= 32;
			check = 0;
		}
		else if (isalphanum(*str))
			check = 0;
		else
			check = 1;
	}
	return (start);
}

/*
int main(void)
{
	char p[21] = "hello 42woRLd, me ow";
	
	ft_strcapitalize(p);
	printf("%s", p);
}
*/