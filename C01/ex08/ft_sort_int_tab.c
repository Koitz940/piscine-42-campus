/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 21:17:18 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/15 18:26:36 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
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

/* int	main(void)
{
	int	list[9] = {3, 5, 5, 67, 8, -3, 5, 0, -1};
	int	lis[9] = {-3, -1, 0, 3, 5, 5, 5, 8, 67};
	int	i;

	ft_sort_int_tab(list, 9);
	for (i = 0; i < 9; i++) {
        printf("%d ", list[i]);
    }
	printf("\n");
	for (i = 0; i < 9; i++) {
        printf("%d ", lis[i]);
    }
} */
