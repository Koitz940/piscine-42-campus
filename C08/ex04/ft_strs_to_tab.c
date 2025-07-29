/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:00:27 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/23 21:40:33 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (start);
}

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

char	*ft_strdup(char *src)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * (1 + ft_strlen(src)));
	if (result == NULL)
		return (NULL);
	return (ft_strcpy(result, src));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*result;

	if (ac <= 0)
		return (NULL);
	result = malloc((ac + 1) * sizeof(*result));
	if (result == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = ft_strdup(av[i]);
		if (result[i].str == NULL)
			return (NULL);
		result[i].copy = ft_strdup(av[i]);
		if (result[i].copy == NULL)
			return (NULL);
	}
	result[ac].str = NULL;
	result[ac].size = 0;
	result[ac].copy = NULL;
	return (result);
}

/*
#include <unistd.h>
void	ft_putstr(char *str)
{
	if (str == NULL)
	{
		return ;
	}
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	long	n;
	char	c;

	n = nb;
	if (nb < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = '0' + n % 10;
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

int main(void)
{
	char* p = "helloooooooooo";
	char* q = "world";
	char* x = "coo";
	char* z = "meoow";
	char *list[] = {p, q, x, z};
	struct s_stock_str* m = ft_strs_to_tab(4, list);
	ft_show_tab(m);
}
*/