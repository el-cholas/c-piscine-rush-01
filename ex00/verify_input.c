/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_input.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:47:04 by agarrigu          #+#    #+#             */
/*   Updated: 2022/02/20 16:35:52 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnum(char c);
void	grid_controller(int grid_size);
int		calculate_grid_size(char *str);
void	print_matrix(int *matrix, int grid_size);

/* Variable length array is forbidden, we need to use malloc */
int	verify_input(char *str, int grid_size)
{
	int	*matrix;
	int	matrix_pointer;
	int	i;

	matrix = (int *) malloc(grid_size * grid_size * 4);
	matrix_pointer = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && (str[i] <= '4'))
		{
			matrix[matrix_pointer] = str[i];
			matrix_pointer++;
		}
		else if (str[i] != ' ')
			return (1);
		i++;
	}
	if (i != grid_size * grid_size * 2 - 1)
		return (1);
	i = 0;
	print_matrix(matrix, grid_size);
	free(matrix);
	return (0);
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
