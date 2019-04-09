/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 11:54:13 by akawa             #+#    #+#             */
/*   Updated: 2018/10/28 16:45:23 by nfilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int width, int height)
{
	int i_w;
	int i_h;

	i_h = 1;
	i_w = 1;
	while (i_h <= height)
	{
		while (i_w <= width)
		{
			if ((i_h == 1 && i_w == 1) || (i_w == width && i_h == 1))
				ft_putchar('A');
			else if ((i_h == height && i_w == 1) ||
				(i_h == height && i_w == width))
				ft_putchar('C');
			else if (i_h < height && i_h > 1 && i_w < width && i_w > 1)
				ft_putchar(' ');
			else
				ft_putchar('B');
			i_w++;
		}
		if (height > 0 && width > 0)
			ft_putchar('\n');
		i_w = 1;
		i_h++;
	}
}
