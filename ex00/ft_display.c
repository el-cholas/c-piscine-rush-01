/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:08:14 by agarrigu          #+#    #+#             */
/*   Updated: 2022/02/20 16:33:43 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(char c)
{
	c = c + '0';
	ft_putchar(c);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_matrix(int *matrix, int grid_size)
{
	int	i;

	i = 0;
	while (i < grid_size * grid_size)
	{
		if (i % grid_size == 0)
		{
			ft_putchar('\n');
		}
		ft_putchar(matrix[i]);
		ft_putchar(' ');
		i++;
	}
}
