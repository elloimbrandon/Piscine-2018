/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 15:30:22 by brfeltz           #+#    #+#             */
/*   Updated: 2018/11/01 21:57:32 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tempr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tempr = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		tempr[i] = min;
		i++;
		min++;
	}
	(*range) = tempr;
	return (i);
}
