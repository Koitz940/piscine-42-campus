/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 15:07:57 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/28 18:11:24 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	counter;

	i = -1;
	counter = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			counter++;
		i++;
	}
	return (counter);
}
