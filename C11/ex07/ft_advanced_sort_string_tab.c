/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:06:11 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/28 18:11:50 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_by_ascii(char **tab, int size, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*aux;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (cmp(tab[j], tab[j + 1]))
			{
				aux = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	size;

	size = 0;
	while (tab[size])
		size++;
	ft_sort_by_ascii(tab, size, cmp);
}
