/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_matrix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:48:20 by agarrigu          #+#    #+#             */
/*   Updated: 2022/02/20 16:52:48 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*get_matrix(char *str, int grid_size)
{
	int	*matrix;
	int	i;

	matrix = (int *) malloc(grid_size * grid_size * 4);
	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			matrix[i / 2] = str[i] - 0x30;
		i++;
	}
	return (matrix);
}
