/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:52:34 by brfeltz           #+#    #+#             */
/*   Updated: 2018/11/06 14:50:07 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *temp;

	i = -1;
	temp = (int*)malloc(sizeof(int) * length);
	while (i++ < length)
		temp[i] = f(tab[i]);
	return (temp);
}
