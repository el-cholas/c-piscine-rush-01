/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:12:27 by agarrigu          #+#    #+#             */
/*   Updated: 2022/02/20 16:53:46 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		verify_input(char *str, int grid_size);
void	ft_putstr(char *str);
int		calculate_grid_size(char *str);
int		*get_matrix(char *str, int grid_size);

int	main(int argc, char *argv[])
{
	int	error;
	int	grid_size;
	int	*matrix;

	grid_size = calculate_grid_size(argv[1]);
	if (argc == 2)
	{
		error = verify_input(argv[1], grid_size);
	}
	else
	{
		error = 1;
	}
	if (error)
		ft_putstr("Error\n");
	/* TODO: gotta free matrix eventually! */
	matrix = get_matrix(argv[1], grid_size);
}
