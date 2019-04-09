/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 10:58:51 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/31 22:14:33 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int x;

	i = 1;
	while (i < argc)
	{
		x = 0;
		while (argv[i][x])
		{
			ft_putchar(argv[i][x]);
			x++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
