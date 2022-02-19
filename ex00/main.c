/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:12:27 by agarrigu          #+#    #+#             */
/*   Updated: 2022/02/19 14:39:40 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_args_to_int_array(char *str);
void	ft_putstr(char *str);

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_args_to_int_array(argv[1]);
	}
	else
	{
		ft_putstr("BOBO\n");
	}
}

/*
void	ft_putstr(char *str);
int		*ft_args_to_int_array(char *str);
int		*ft_rush_01(int *tab);
void	ft_print_array(int *tab);
int	main(int argc, char *argv[])
{
	int	*input;
	int	*result;

	if (argc != 2)
	{
		ft_putstr("Must have one and only one argument");
		return (255);
	}
	input = ft_args_to_int_array(argv[1]);
	result = ft_rush_01(input);
	ft_print_array(result);
	return (0);
}
*/