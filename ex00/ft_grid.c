/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:58:23 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/20 16:01:37 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/* void	assemble_grid(int *matrix) */
void	assemble_grid(int grid[1][1], int grid_size)
{
	int	x;
	int	y;

	y = 0;
	while (y < grid_size - 1)
	{
		x = 0;
		while (x < grid_size - 1)
		{
			grid[x][y] = -1;
			x++;
		}
		y++;
	}
}

void	grid_controller(int grid_size)
{
	int	grid[grid_size][grid_size];
	int	solving;

	assemble_grid(grid, grid_size);

	/*
	while (solving)
	{
		printf("Hola\n");
	}
	*/
}
