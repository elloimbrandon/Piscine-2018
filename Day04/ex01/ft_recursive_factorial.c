/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 11:10:16 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/27 15:51:59 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	else if (nb <= 0 || nb >= 12)
	{
		return (0);
	}
	else
	{
		return (ft_recursive_factorial(nb - 1) * nb);
	}
}
