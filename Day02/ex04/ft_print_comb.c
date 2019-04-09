/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:40:31 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/24 19:06:57 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int	comb[3];

	comb[0] = 48;
	while (comb[0] < 58)
	{
		comb[1] = comb[0] + 1;
		while (comb[1] < 58)
		{
			comb[2] = comb[1] + 1;
			while (comb[2] < 58)
			{
				ft_putchar(comb[0]);
				ft_putchar(comb[1]);
				ft_putchar(comb[2]);
				if (!(comb[0] == '7' && comb[1] == '8' && comb[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
