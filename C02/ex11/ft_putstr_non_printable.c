/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:53:21 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/17 21:12:37 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*base;
	char	a;

	base = "0123456789abcdef";
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			write(1, str, 1);
		}
		else
		{
			write(1, "\\", 1);
			a = base[*str / 16];
			write(1, &a, 1);
			a = base[*str % 16];
			write(1, &a, 1);
		}
		str++;
	}
}

/* int main(void)
{
	char *q = "bga\n\tiuwer";
	ft_putstr_non_printable(q);
} */