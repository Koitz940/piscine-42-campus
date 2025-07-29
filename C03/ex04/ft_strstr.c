/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:44:59 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/17 22:10:37 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	strlem(char *p)
{
	int	i;

	i = 0;
	while (p[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = strlem(to_find);

	if (len == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (j + 1 == len)
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char* p = "I am very smart";
	char* tf = "am ";
	char* no = "\n";
	printf("%p\n", p);
	printf("%p\n", ft_strstr(p, tf));
	printf("%p", ft_strstr(p, no));
}*/