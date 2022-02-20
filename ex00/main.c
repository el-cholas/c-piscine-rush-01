/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:12:27 by agarrigu          #+#    #+#             */
/*   Updated: 2022/02/20 11:04:15 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_args_to_int_array(char *str);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int	error;

	if (argc == 2)
	{
		error = ft_args_to_int_array(argv[1]);
	}
	else
	{
		error = 1;
	}
	if (error)
		ft_putstr("\nBOBO\n");
}
