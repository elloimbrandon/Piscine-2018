/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 11:49:44 by brfeltz           #+#    #+#             */
/*   Updated: 2018/11/01 20:13:13 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *range;

	if (min >= max)
		return (0);
	range = malloc(sizeof(char) * (max - min) + 1);
	i = min;
	while (i < max)
	{
		range[i - min] = i;
		i++;
	}
	return (range);
}
