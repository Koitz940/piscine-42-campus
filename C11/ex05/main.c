/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 20:36:07 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/28 17:53:46 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"
#include "operators.h"
#include "do_op.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		a;
	int		b;

	if (argc != 4)
		return (1);
	if (ft_strlen(argv[2]) != 1)
	{
		write(1, "0", 1);
		return (1);
	}
	if (!ft_in(*argv[2], "%+-*/"))
	{
		write(1, "0", 1);
		return (1);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	ft_do_op(a, b, *(argv[2]));
}
