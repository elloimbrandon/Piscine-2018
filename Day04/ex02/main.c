/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:22:58 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/28 10:22:42 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	int	nbr = 3;
	int	pow = 1;
	printf("%d to the power of %d is %d\n", nbr, pow, ft_iterative_power(nbr,pow));
	return(0);
}
