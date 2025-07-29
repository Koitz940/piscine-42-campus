/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 21:11:44 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/13 21:40:56 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[j];
		tab[j] = aux;
		i++;
		j--;
	}
}

/* int	main(void)
{
	int	list[10] = {3, 5, 5, 67, 8, -3, 5, 0, -1, -1000};
	int	lis[10] = {-1000, -1, 0, 5, -3, 8, 67, 5, 5, 3};
	int	i;

	ft_rev_int_tab(list, 10);
	for (i = 0; i < 9; i++) {
        printf("%d ", list[i]);
    }
	printf("\n");
	for (i = 0; i < 9; i++) {
        printf("%d ", lis[i]);
    }
} */
