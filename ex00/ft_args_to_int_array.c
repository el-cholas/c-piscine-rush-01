/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_to_int_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:47:04 by agarrigu          #+#    #+#             */
/*   Updated: 2022/02/20 11:08:03 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);
void	ft_putnum(char c);
void	ft_putchar(char c);

int	ft_args_to_int_array(char *str)
{
	int	matrix[16];
	int	matrix_pointer;
	int	i;

	matrix_pointer = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && (str[i] <= '4'))
		{
			matrix[matrix_pointer] = str[i];
			matrix_pointer++;
		}
		else if ((str[i] != ' ') || (i > 30))
		{
			return (1);
		}
		i++;
	}
	i = 0;
	while (i < 16)
	{
		if (i % 4 == 0)
		{
			ft_putchar('\n');
		}
		ft_putchar(matrix[i]);
		ft_putchar(' ');
		i++;
	}
	/*
	int	i;
	int	*tab;

	tab = (int *) malloc(16 * 4);
	i = 0;
	while (str[i] != '\0')
	{
		tab[i] = str[i * 2] - 0x30;
		i++;
	}
	*/
	return (0);
}
