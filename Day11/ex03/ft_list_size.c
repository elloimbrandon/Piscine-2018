/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:51:39 by brfeltz           #+#    #+#             */
/*   Updated: 2018/11/07 18:06:58 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*n1;
	int		size;

	size = 0;
	n1 = begin_list;
	while (n1)
	{
		n1 = n1->next;
		size++;
	}
	return (size);
}
