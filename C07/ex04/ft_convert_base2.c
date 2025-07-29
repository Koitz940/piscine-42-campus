/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:05:20 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/22 20:14:08 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++ != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_find(char a, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			return (i);
		i++;
	}
	return (-1);
}

int	isdistict(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] <= ' ' || str[i] == 127)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
