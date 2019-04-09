/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:22:29 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/27 20:01:06 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int num;
	int result;

	if (power < 0)
		return (0);
	num = 0;
	result = 1;
	while (num < power)
	{
		result *= nb;
		num++;
	}
	return (result);
}
