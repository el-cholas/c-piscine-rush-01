/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:12:27 by agarrigu          #+#    #+#             */
/*   Updated: 2022/02/20 16:19:05 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		verify_input(char *str);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int	error;
	int	grid_size;

	grid_size = 4;
	if (argc == 2)
	{
		error = verify_input(argv[1], grid_size);
	}
	else
	{
		error = 1;
	}
	if (error)
		ft_putstr("\nBOBO\n");
}
