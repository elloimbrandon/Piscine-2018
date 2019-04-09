/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 20:09:34 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/27 20:12:34 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	int	nbr = 3;
	int	pow = 5;
	printf("%d to the power of %d is %d\n", nbr, pow, ft_recursive_power(nbr,pow));
	return(0);
}
