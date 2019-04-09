/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 10:43:16 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/27 11:06:02 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int count;
	int result;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	count = 2;
	result = 1;
	while (count <= nb)
	{
		result *= count;
		count++;
	}
	return (result);
}
